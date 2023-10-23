#include "Array.h"
#include <iostream>

int main() {
    // Create an array of integers with a capacity of 10
    Array<int> intArray(10);

    // Insert some values
    intArray.Insert(0, 5);
    intArray.Insert(1, 10);
    intArray.Insert(2, 15);
    intArray.Insert(3, 20);

    // Access and print values
    std::cout << "Element at index 2: " << intArray.Access(2) << std::endl;

    // Update a value
    intArray.Update(2, 25);
    std::cout << "Element at index 2 after update: " << intArray.Access(2) << std::endl;

    // Delete a value
    intArray.DeleteAt(1);
    std::cout << "Element at index 1 after deletion: " << intArray.Access(1) << std::endl;

    // Resize the array
    intArray.Resize(20);
    
    // Insert more values
    intArray.Insert(4, 30);
    intArray.Insert(5, 35);

    // Create an array of strings
    Array<std::string> strArray(5);
    strArray.Insert(0, "Hello");
    strArray.Insert(1, "World");

    // Print string values
    std::cout << "String element at index 0: " << strArray.Access(0) << std::endl;
    std::cout << "String element at index 1: " << strArray.Access(1) << std::endl;

    return 0;
}

/*

Element at index 2: 15
Element at index 2 after update: 25
Element at index 1 after deletion: 25
Error: Cannot insert because the index is out of bounds.
Error: Cannot insert because the index is out of bounds.
String element at index 0: Hello
String element at index 1: World


*/
