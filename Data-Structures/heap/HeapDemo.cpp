// HeapDemo.cpp
#include <iostream>
#include "Heap.h"

int main() {
    Heap<int> maxHeap;

    // Insert elements
    maxHeap.insert(15);
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(17);
    maxHeap.insert(25);

    // Display maximum element
    std::cout << "Maximum element: " << maxHeap.getMax() << std::endl;

    // Deleting maximum element
    maxHeap.deleteMax();

    // Display maximum element after deletion
    std::cout << "Maximum element after deletion: " << maxHeap.getMax() << std::endl;

    return 0;
}
