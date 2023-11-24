#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <algorithm>  // For std::swap

/**
 * BubbleSort Template Function
 * 
 * This function sorts an array using the Bubble Sort algorithm.
 * It is a comparison-based algorithm in which each pair of adjacent elements 
 * is compared and the elements are swapped if they are not in order.
 * 
 * Template Type T must support comparison operations.
 * 
 * @param arr Array to be sorted.
 * @param size Size of the array.
 * Avoid using for large datasets as time complexity of algorithm is O(n^2)
 */
template <typename T>
void BubbleSort(T arr[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (!swapped) {
            break;
        }
    }
}

#endif // BUBBLESORT_H
