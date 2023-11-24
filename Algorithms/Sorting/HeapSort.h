#ifndef HEAPSORT_H
#define HEAPSORT_H

/**
 * Heapify Function
 * 
 * This function is used to rearrange a subtree into a heap.
 * A subtree is considered a heap when the parent node is greater 
 * (in case of a max heap) or smaller (in case of a min heap) 
 * than its children nodes.
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array representing the heap.
 * @param n Size of the heap.
 * @param i Index of the root of the subtree.
 */
template <typename T>
void Heapify(T arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        T swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;

        // Recursively heapify the affected sub-tree
        Heapify(arr, n, largest);
    }
}

/**
 * HeapSort Function
 * 
 * This function sorts an array using the Heap Sort algorithm.
 * It first builds a max heap and then repeatedly extracts the largest element
 * and places it at the end of the array.
 * 
 * Template Type T must support comparison and assignment operations.
 * 
 * @param arr Array to be sorted.
 * @param n Size of the array.
 */
template <typename T>
void HeapSort(T arr[], int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        T temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Call max heapify on the reduced heap
        Heapify(arr, i, 0);
    }
}

#endif // HEAPSORT_H