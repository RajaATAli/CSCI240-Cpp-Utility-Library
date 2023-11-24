#include <iostream>
#include "QuickSort.h"

int main() {
    // Example with integer array
    int intArray[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using QuickSort algorithm
    QuickSort(intArray, 0, n - 1);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Example with character array
    char charArray[] = {'q', 'u', 'i', 'c', 'k', 's', 'o', 'r', 't'};
    int m = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Original character array: ";
    for (int i = 0; i < m; i++)
        std::cout << charArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using QuickSort algorithm
    QuickSort(charArray, 0, m - 1);

    std::cout << "Sorted character array: ";
    for (int i = 0; i < m; i++)
        std::cout << charArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
