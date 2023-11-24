#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

/**
 * BinarySearch Template Function
 * 
 * This function performs binary search on a sorted array. It compares the 
 * target value to the middle element of the array; if they are not equal, 
 * the half in which the target cannot lie is eliminated, and the search 
 * continues on the remaining half until the value is found or the array is exhausted.
 * 
 * Template Type T must support comparison operations.
 * 
 * @param arr Sorted array to be searched.
 * @param l Left index for the current search interval.
 * @param r Right index for the current search interval.
 * @param x Element to be searched.
 * @return The index of the element if found, otherwise -1.
 */
template <typename T>
int BinarySearch(T arr[], int l, int r, T x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // Element was not present in the array
    return -1;
}

#endif // BINARYSEARCH_H
