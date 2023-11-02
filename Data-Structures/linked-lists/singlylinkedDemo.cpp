#include "singly_linked.h"
#include <iostream>
#include <string>

int main() {
    // Integer list demonstration
    SinglyLinkedList<int> intList;
    
    intList.insertAtTail(1);
    intList.insertAtTail(2);
    intList.insertAtTail(3);
    intList.display();

    intList.insertAtHead(4);
    intList.display();

    intList.insertAfterNode(2, 5);
    intList.display();

    std::cout << intList.search(10) << std::endl;
    std::cout << intList.search(2) << std::endl;

    intList.deletion(2);
    std::cout << "List after deleting 2:" << std::endl;
    intList.display();

    std::cout << intList.search(2) << std::endl;

    // String list demonstration
    SinglyLinkedList<std::string> stringList;

    stringList.insertAtTail("Hello");
    stringList.insertAtTail("World");
    stringList.insertAtTail("!");
    stringList.display();

    stringList.insertAtHead("Greetings");
    stringList.display();

    stringList.insertAfterNode("Hello", "there");
    stringList.display();

    std::cout << stringList.search("World") << std::endl;
    std::cout << stringList.search("Goodbye") << std::endl;

    stringList.deletion("World");
    std::cout << "List after deleting 'World':" << std::endl;
    stringList.display();

    std::cout << stringList.search("World") << std::endl;

    return 0;
}
