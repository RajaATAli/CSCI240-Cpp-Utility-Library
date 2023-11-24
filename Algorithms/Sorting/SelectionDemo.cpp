#include <iostream>
#include "SelectionSort.h"

int main() {
    // Example with integer array
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using SelectionSort algorithm
    SelectionSort(intArray, n);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Example with double array
    double doubleArray[] = {20.1, 34.2, 4.0, 2.3, 10.5};
    int m = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Original double array: ";
    for (int i = 0; i < m; i++)
        std::cout << doubleArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using SelectionSort algorithm
    SelectionSort(doubleArray, m);

    std::cout << "Sorted double array: ";
    for (int i = 0; i < m; i++)
        std::cout << doubleArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
