#include <iostream>
#include "BubbleSort.h"

int main() {
    // Example with integer array
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArray)/sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Sorting array using BubbleSort algorithm
    BubbleSort(intArray, n);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Example with float array
    float floatArray[] = {3.6, 2.4, 4.7, 1.9};
    int m = sizeof(floatArray)/sizeof(floatArray[0]);

    std::cout << "Original float array: ";
    for (int i = 0; i < m; ++i) {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    // Sorting array using BubbleSort algorithm
    BubbleSort(floatArray, m);

    std::cout << "Sorted float array: ";
    for (int i = 0; i < m; ++i) {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
