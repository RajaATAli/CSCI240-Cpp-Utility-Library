// singly_linked.h
#ifndef SINGLY_LINKED_H
#define SINGLY_LINKED_H

#include <iostream>

// Templated Node class
template <typename T>
class Node {
public:
  T data;         // The data held by the node
  Node* next;     // Pointer to the next node

  // Constructor initializes the node with a value and sets next to nullptr
  explicit Node(T val) : data(val), next(nullptr) {}
};

// Templated Singly Linked List class
template <typename T>
class SinglyLinkedList {
public:
  Node<T>* head;  // Pointer to the head of the list

  // Constructor initializes the list with head pointing to nullptr
  SinglyLinkedList() : head(nullptr) {}

  // Destructor to clear up the list
  ~SinglyLinkedList() {
    while (head != nullptr) {
      Node<T>* toDelete = head;
      head = head->next;
      delete toDelete; // Delete the node
    }
  }

  // Function to insert a value at the tail of the list
  void insertAtTail(T val) {
    Node<T>* n = new Node<T>(val); // Create a new node
    if (head == nullptr) {         // If list is empty, new node is the head
      head = n;
      return;
    }
    Node<T>* temp = head;          // Start at the head
    while (temp->next != nullptr) { // Traverse to the end of the list
      temp = temp->next;
    }
    temp->next = n; // Append the new node at the end
  }

  // Function to insert a value at the head of the list
  void insertAtHead(T val) {
    Node<T>* n = new Node<T>(val); // Create a new node
    n->next = head;                // Point new node to the current head
    head = n;                      // New node becomes the head
  }

  // Function to insert a new value after a node with a specified value
  void insertAfterNode(T valueAfter, T val) {
    Node<T>* temp = head; // Start at the head
    // Find the node after which to insert
    while (temp != nullptr && temp->data != valueAfter) {
      temp = temp->next;
    }
    if (temp != nullptr) {
      Node<T>* n = new Node<T>(val); // Create the new node
      n->next = temp->next;          // New node points to the next node
      temp->next = n;                // Insert the new node after temp
    } else {
      std::cout << "Node with value " << valueAfter << " not found." << std::endl;
    }
  }

  // Function to delete a node with a specific key
  void deletion(T key) {
    if (head == nullptr) { // If the list is empty, do nothing
      return;
    }
    if (head->data == key) { // If the head is to be deleted
      Node<T>* toDelete = head;
      head = head->next;     // Move head to the next node
      delete toDelete;       // Delete the old head node
      return;
    }
    Node<T>* prev = nullptr;
    Node<T>* temp = head;
    // Traverse the list to find the node to delete
    while (temp != nullptr && temp->data != key) {
      prev = temp; // Keep track of the node before temp
      temp = temp->next; // Move to the next node
    }
    if (temp != nullptr) { // If the node to delete was found
      prev->next = temp->next; // Unlink the node from the list
      delete temp;             // Delete the node
    }
  }

  // Function to search for a value in the list
  bool search(T key) {
    Node<T>* temp = head; // Start at the head
    while (temp != nullptr) { // Traverse the list
      if (temp->data == key) { // If the value is found
        return true;
      }
      temp = temp->next; // Move to the next node
    }
    return false; // Value not found
  }

  // Function to display the list
  void display() {
    Node<T>* temp = head; // Start at the head
    while (temp != nullptr) { // Traverse the list
      std::cout << temp->data << "->";
      temp = temp->next; // Move to the next node
    }
    std::cout << "null" << std::endl; // End of list
  }
};

#endif // SINGLY_LINKED_H


