#include <iostream>
#include <string>
#include "LinearSearch.h"

int main() {
    // Example with integer array
    int intArray[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int n = sizeof(intArray) / sizeof(intArray[0]);
    int intKey = 110;

    int intResult = LinearSearch(intArray, n, intKey);
    if (intResult != -1)
        std::cout << "Element " << intKey << " is present at index " << intResult << std::endl;
    else
        std::cout << "Element " << intKey << " is not present in array" << std::endl;

    // Example with string array
    std::string strArray[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int m = sizeof(strArray) / sizeof(strArray[0]);
    std::string strKey = "cherry";

    int strResult = LinearSearch(strArray, m, strKey);
    if (strResult != -1)
        std::cout << "Element " << strKey << " is present at index " << strResult << std::endl;
    else
        std::cout << "Element " << strKey << " is not present in array" << std::endl;

    return 0;
}
