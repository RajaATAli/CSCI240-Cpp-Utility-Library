#include <iostream>
#include <string>
#include "BinarySearch.h"

int main() {
    // Example with sorted integer array
    int intArray[] = {2, 3, 4, 10, 40};
    int n = sizeof(intArray) / sizeof(intArray[0]);
    int intKey = 10;

    int intResult = BinarySearch(intArray, 0, n - 1, intKey);
    if (intResult != -1)
        std::cout << "Element " << intKey << " found at index " << intResult << std::endl;
    else
        std::cout << "Element " << intKey << " not present in array" << std::endl;

    // Example with sorted string array
    std::string strArray[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int m = sizeof(strArray) / sizeof(strArray[0]);
    std::string strKey = "cherry";

    int strResult = BinarySearch(strArray, 0, m - 1, strKey);
    if (strResult != -1)
        std::cout << "Element " << strKey << " found at index " << strResult << std::endl;
    else
        std::cout << "Element " << strKey << " not present in array" << std::endl;

    return 0;
}
