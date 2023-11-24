#ifndef MERGESORT_H
#define MERGESORT_H

/**
 * Merge Function
 * 
 * This function merges two subarrays of arr[].
 * First subarray is arr[l..m]
 * Second subarray is arr[m+1..r]
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array to be merged.
 * @param l Left index of the subarray.
 * @param m Middle index of the subarray.
 * @param r Right index of the subarray.
 */
template <typename T>
void Merge(T arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    T L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/**
 * MergeSort Function
 * 
 * Sorts an array using the Merge Sort algorithm.
 * It divides the array into two halves, calls itself for the two halves, 
 * and then merges the two sorted halves.
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array to be sorted.
 * @param l Left index of the subarray.
 * @param r Right index of the subarray.
 */
template <typename T>
void MergeSort(T arr[], int l, int r) {
    if (l < r) {
        // Find the middle point
        int m = l + (r - l) / 2;

        // Sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);

        // Merge the sorted halves
        Merge(arr, l, m, r);
    }
}

#endif // MERGESORT_H
