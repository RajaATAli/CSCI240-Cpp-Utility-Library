// Heap.h - Heap is a tree based data structure
#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <stdexcept>

template <typename T>
class Heap {
private:
    std::vector<T> data;

    void heapifyUp(int index) {
        while (index > 0 && data[parent(index)] < data[index]) {
            std::swap(data[parent(index)], data[index]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int leftChildIndex = leftChild(index);
        int rightChildIndex = rightChild(index);

        if (leftChildIndex < data.size() && data[leftChildIndex] > data[largest])
            largest = leftChildIndex;

        if (rightChildIndex < data.size() && data[rightChildIndex] > data[largest])
            largest = rightChildIndex;

        if (largest != index) {
            std::swap(data[index], data[largest]);
            heapifyDown(largest);
        }
    }

    int parent(int index) { return (index - 1) / 2; }
    int leftChild(int index) { return 2 * index + 1; }
    int rightChild(int index) { return 2 * index + 2; }

public:
    Heap() {}

    void insert(T value) {
        data.push_back(value);
        heapifyUp(data.size() - 1);
    }

    void deleteMax() {
        if (data.size() == 0) {
            throw std::out_of_range("Heap is empty");
        }
        data[0] = data.back();
        data.pop_back();
        heapifyDown(0);
    }

    T getMax() const {
        if (data.size() == 0) {
            throw std::out_of_range("Heap is empty");
        }
        return data[0];
    }

    bool isEmpty() const {
        return data.empty();
    }
};

#endif // HEAP_H

