import React from 'react';
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

  mergeSort() {
    // Call mergeSort function
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