#include <iostream>
#include "HeapSort.h"

int main() {
    // Example with integer array
    int intArray[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using HeapSort algorithm
    HeapSort(intArray, n);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Example with double array
    double doubleArray[] = {4.3, 2.5, 3.7, 4.1, 5.9};
    int m = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Original double array: ";
    for (int i = 0; i < m; i++)
        std::cout << doubleArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using HeapSort algorithm
    HeapSort(doubleArray, m);

    std::cout << "Sorted double array: ";
    for (int i = 0; i < m; i++)
        std::cout << doubleArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
