#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

/**
 * LinearSearch Template Function
 * 
 * This function searches for a specified element in the given array using 
 * the Linear Search algorithm. It sequentially checks each element of the 
 * array until a match is found or the whole array has been searched.
 * 
 * Template Type T must support equality comparison.
 * 
 * @param arr Array to be searched.
 * @param size Size of the array.
 * @param x Element to be searched.
 * @return The index of the element if found, otherwise -1.
 */
template <typename T>
int LinearSearch(T arr[], int size, T x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x)
            return i; // Element found
    }
    return -1; // Element not found
}

#endif // LINEARSEARCH_H
