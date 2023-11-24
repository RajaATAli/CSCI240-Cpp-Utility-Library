#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

/**
 * SelectionSort Template Function
 * 
 * This function sorts an array using the Selection Sort algorithm.
 * It repeatedly selects the smallest (or largest, depending on the order) 
 * element from the unsorted section and moves it to the end of the sorted section.
 * 
 * Template Type T must support comparison operations.
 * 
 * @param arr Array to be sorted.
 * @param size Size of the array.
 * This algorithm is not very efficient for large datasets due to its O(n^2) time complexity in the average and worst case.
 */
template <typename T>
void SelectionSort(T arr[], int size) {
    int i, j, min_idx;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < size-1; i++) {
        // Find the minimum element in the unsorted array
        min_idx = i;
        for (j = i+1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        T temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

#endif // SELECTIONSORT_H
