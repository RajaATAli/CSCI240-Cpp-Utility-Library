#ifndef QUICKSORT_H
#define QUICKSORT_H

/**
 * Partition Function
 * 
 * This function takes the last element as pivot, places 
 * the pivot element at its correct position in sorted array, 
 * and places all smaller (smaller than pivot) to left of pivot 
 * and all greater elements to right of pivot.
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array to be partitioned.
 * @param low Starting index.
 * @param high Ending index.
 * @return The partitioning index.
 */
template <typename T>
int Partition(T arr[], int low, int high) {
    T pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    T temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

/**
 * QuickSort Function
 * 
 * The main function that implements QuickSort. 
 * arr[] --> Array to be sorted, 
 * low --> Starting index, 
 * high --> Ending index.
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array to be sorted.
 * @param low Starting index.
 * @param high Ending index.
 */
template <typename T>
void QuickSort(T arr[], int low, int high) {
    if (low < high) {
        /* pi is partitioning index, arr[pi] is now at right place */
        int pi = Partition(arr, low, high);

        // Separately sort elements before partition and after partition
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

#endif // QUICKSORT_H
