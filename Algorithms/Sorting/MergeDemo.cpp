#include <iostream>
#include <string>
#include "MergeSort.h"

int main() {
    // Example with integer array
    int intArray[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using MergeSort algorithm
    MergeSort(intArray, 0, n - 1);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Example with string array
    std::string strArray[] = {"Apple", "Orange", "Banana", "Grape", "Cherry"};
    int m = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Original string array: ";
    for (int i = 0; i < m; i++)
        std::cout << strArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using MergeSort algorithm
    MergeSort(strArray, 0, m - 1);

    std::cout << "Sorted string array: ";
    for (int i = 0; i < m; i++)
        std::cout << strArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
