#include <iostream>
#include "Stack.h"

void demoOne() {
    Stack<float> nums;

    nums.push(1.4);
    nums.push(3.9);
    nums.push(7.2);

    // 7
    float top = *nums.pop();

    std::cout << "The element at the top of the stack is: " << top << std::endl;

    // "Removes" the item from the top of the stack (3)
    nums.pop();

    // 1
    top = *nums.pop();

    std::cout << "The element at the top of the stack is now: " << top << std::endl;
}

//Highlights the idea that a stack is a FILO (First In Last Out) data structure
void demoTwo() {

    Stack<int> nums;

    for (int i = 1; i <= 10; i ++) {
        std::cout << "Pushing " << i << " onto the stack" << std::endl;
        nums.push(i);
    }   

    std::cout << std::endl;

    while (nums.size() != 0)
        std::cout << "Popping " << *nums.pop() << " from the stack" << std::endl;
}

int main() {
    demoOne();

    std::cout << std::endl;

    demoTwo();
}