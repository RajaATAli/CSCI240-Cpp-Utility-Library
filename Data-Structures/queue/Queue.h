// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;

        Node(T d) : data(d), next(nullptr) {}
    };

    Node* front;
    Node* rear;
    int size;

public:
    Queue() : front(nullptr), rear(nullptr), size(0) {}

    ~Queue() {
        clear();
    }

    void enqueue(T data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    T dequeue() {
        if (isEmpty()) {
            throw "Queue is empty";
        }
        Node* temp = front;
        T data = front->data;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        size--;
        return data;
    }

    T peek() const {
        if (isEmpty()) {
            throw "Queue is empty";
        }
        return front->data;
    }

    T back() const {
        if (isEmpty()) {
            throw "Queue is empty";
        }
        return rear->data;
    }

    bool contains(T data) const {
        Node* current = front;
        while (current != nullptr) {
            if (current->data == data) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() const {
        return size == 0;
    }

    int getSize() const {
        return size;
    }
};

#endif // QUEUE_H
