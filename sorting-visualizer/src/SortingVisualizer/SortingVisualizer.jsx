import React from 'react';
import * as  sortingAlgorithms from '../sortingAlgorithms/sortingAlgorithms.js'; // Importing all sorting algorithms
import './SortingVisualizer.css';

export default class SortingVisualizer extends React.Component {
  constructor(props) {
    super(props);

    this.state = {
      array: [], // Array stored in state - main array that we will be sorting
    };
  }

  componentDidMount() { // When component mounts (app is opened), generate a new array - will be reused in generate new array button
    this.resetArray();
  }

  resetArray() {
    const array = [];
    for (let i = 0; i < 320; i++) {
      array.push(randomIntFromInterval(5, 750)); 
    }
    this.setState({ array });
  }

  // For the animations, some sort of wrapper method above the algorithms is needed that will call the algorithms and then returns whatever algorithm we're comparing
  // And that return value will be the animations array in final sorted order

  /*
  mergeSort() {
    // Actual Algorithm is in helper methods, which are called here
    const javaScriptSortedArray = this.state.array
    .slice()
    .sort((a, b) => a - b); // Sorts array in ascending order
    const sortedArray = sortingAlgorithms.mergeSort(this.state.array); // Merge sort algorithm

    console.log(arraysAreEqual(javaScriptSortedArray, sortedArray)); // Check if arrays are equal
  } */

  mergeSort() {
    const animations = sortingAlgorithms.mergeSort(this.state.array); // Merge sort algorithm
    const newAnimations = [];

    for (const animation of animations) {
      newAnimations.push(animation.comparison);
      newAnimations.push(animation.comparison);
      newAnimations.push(animation.swap);
    }

    for (let i = 0; i < newAnimations.length; i++) {
      const arrayBars = document.getElementsByClassName('array-bar');
      const isColorChange = i % 3 !== 2; // If i is not equal to 2, then it is a color change
      if (isColorChange) {
        const [barOneIdx, barTwoIdx] = newAnimations[i]; // Destructuring
        const barOneStyle = arrayBars[barOneIdx].style; // Bar one style
        const barTwoStyle = arrayBars[barTwoIdx].style; // Bar two style
        const color = i % 3 === 0 ? 'red' : 'turquoise'; // If i is equal to 0, then color is red, else color is turquoise
        setTimeout(() => {
          barOneStyle.backgroundColor = color; // Change color of bar one
          barTwoStyle.backgroundColor = color; // Change color of bar two
        }, i * 4 ); // Change color every 10 milliseconds
      } else {
        setTimeout(() => {
          const [barOneIdx, newHeight] = newAnimations[i]; // Destructuring
          const barOneStyle = arrayBars[barOneIdx].style; // Bar one style
          barOneStyle.height = `${newHeight}px`; // Change height of bar one
        }, i * 4); // Change height every 4 milliseconds
      }
    }
  }



  render() {
    const {array} = this.state; // Destructuring array from state

    return (
      <div className="array-container">
        {array.map((value, idx) => (
          <div 
            className="array-bar" 
            key={idx}
            // Inline styling to set height of each bar
            style={{height: `${value}px`}}> 
          </div>
        ))}
        <button onClick={() => this.resetArray()}>Generate New Array</button>
        <button onClick={() => this.mergeSort()}>Merge Sort</button>

      </div>
    );
  }
}

function randomIntFromInterval(min, max) { // Helper function to generate random integer
  return Math.floor(Math.random() * (max - min + 1) + min);
}

function arraysAreEqual(arrayOne, arrayTwo) { // Helper function to check if arrays are equal
  if (arrayOne.length !== arrayTwo.length) return false; // If arrays are not equal in length, return false

  for (let i = 0; i < arrayOne.length; i++) { // Loop through array
    if (arrayOne[i] !== arrayTwo[i]) { // If array values are not equal, return false
      return false;
    }
  }

  return true; // If arrays are equal, return true
}