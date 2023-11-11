#include <iostream>
#include "Queue.h"

int main() {
    Queue<int> myQueue;

    std::cout << "Enqueuing 5, 10, 15, 20" << std::endl;
    myQueue.enqueue(5);
    myQueue.enqueue(10);
    myQueue.enqueue(15);
    myQueue.enqueue(20);

    std::cout << "The queue contains 10? " << (myQueue.contains(10) ? "Yes" : "No") << std::endl;
    std::cout << "The queue contains 25? " << (myQueue.contains(25) ? "Yes" : "No") << std::endl;

    std::cout << "Front of queue: " << myQueue.peek() << std::endl;
    std::cout << "Back of queue: " << myQueue.back() << std::endl;

    std::cout << "Dequeuing elements: ";
    while (!myQueue.isEmpty()) {
        std::cout << myQueue.dequeue() << " ";
    }
    std::cout << std::endl;

    std::cout << "Enqueuing 5, 10, 15, 20 again" << std::endl;
    myQueue.enqueue(5);
    myQueue.enqueue(10);
    myQueue.enqueue(15);
    myQueue.enqueue(20);

    std::cout << "Reversing the queue" << std::endl;
    myQueue.reverseQueue();

    std::cout << "Dequeuing elements after reversing: ";
    while (!myQueue.isEmpty()) {
        std::cout << myQueue.dequeue() << " ";
    }
    std::cout << std::endl;

    std::cout << "Enqueuing 30" << std::endl;
    myQueue.enqueue(30);
    std::cout << "Clearing the queue" << std::endl;
    myQueue.clear();

    std::cout << "Is queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}

