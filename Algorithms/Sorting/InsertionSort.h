#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

/**
 * InsertionSort Template Function
 * 
 * This function sorts an array using the Insertion Sort algorithm.
 * It builds the final sorted array one element at a time, inserting each new element
 * into the correct position in the sorted part.
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array to be sorted.
 * @param size Size of the array.
 */
template <typename T>
void InsertionSort(T arr[], int size) {
    int i, j;
    T key;

    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key,
           to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

#endif // INSERTIONSORT_H
