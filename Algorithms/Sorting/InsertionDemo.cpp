#include <iostream>
#include <string>
#include "InsertionSort.h"

int main() {
    // Example with integer array
    int intArray[] = {29, 10, 14, 37, 13};
    int n = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using InsertionSort algorithm
    InsertionSort(intArray, n);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < n; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    // Example with string array
    std::string strArray[] = {"Banana", "Apple", "Cherry", "Date"};
    int m = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Original string array: ";
    for (int i = 0; i < m; i++)
        std::cout << strArray[i] << " ";
    std::cout << std::endl;

    // Sorting array using InsertionSort algorithm
    InsertionSort(strArray, m);

    std::cout << "Sorted string array: ";
    for (int i = 0; i < m; i++)
        std::cout << strArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
