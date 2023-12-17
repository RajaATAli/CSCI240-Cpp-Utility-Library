# Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. Despite its simplicity, Bubble Sort is not very efficient for large lists compared to more advanced algorithms like QuickSort or MergeSort.

## Algorithm Overview

The algorithm works by comparing each item in the list with the item next to it and swapping them if required. In every pass, the largest element 'bubbles up' to its correct position, hence the name.

## Process

1. **Compare Adjacent Elements**: Start at the beginning of the array and swap the first two elements if the first is greater than the second. 
2. **Go to Next Pair**: Move to the next pair of elements and repeat the process.
3. **Repeat**: Continue until the end of the array. After each pass, the largest element among the unsorted elements is placed at the end of the array.
4. **Iterate**: Repeat the process for all elements except the last one, which is already in place.

## Characteristics

- **Simple Implementation**: Bubble Sort is straightforward to understand and implement.
- **Inefficient for Large Lists**: Generally, Bubble Sort is not suitable for large data sets.
- **Stable Sort**: Maintains the relative order of equal elements.

## Use Cases

- **Educational Purposes**: Often used for educational purposes to teach sorting algorithms.
- **Small Data Sets**: Efficient for small data sets.

## Complexity

- **Time Complexity**: O(n^2) in the average and worst cases, where n is the number of items being sorted.
- **Space Complexity**: O(1), as it only requires a single additional memory space for the swap.

## Interactive Learning Resources

Here are some interactive resources for understanding Bubble Sort:

1. [**Bubble Sort Visualization Tool**](https://visualgo.net/en/sorting): Visualize the step-by-step process of Bubble Sort.

2. [**Interactive Bubble Sort Exercises**](https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html): Practice Bubble Sort algorithm to understand its functionality.

3. [**Algorithm Explanation and Examples**](https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm): Detailed explanation and implementation examples of Bubble Sort.

These resources provide an engaging way to learn about Bubble Sort, its process, and its application in sorting small sets of data.
