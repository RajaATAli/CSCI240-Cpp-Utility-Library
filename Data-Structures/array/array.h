#ifndef ARRAY_H
#define ARRAY_H

class Array 
{
private:
  int* elements_; // Pointer to the array elements
  int size_; // Size of the array
  int capacity_; // Capacity of the array

public:
  // Constructor
  Array(int capacity);

  // Destructor
  ~Array();

  // Insertion
  void Insert(int element, int index);

  // Deletion
  void Delete(int index);

  // Traversal
  void Traverse(void (*operation)(int));

  // Searching
  int Search(int element);

  // Updating
  void Update(int element, int index);

  // Get the size of the array
  int GetSize();

  // Get the capacity of the array
  int GetCapacity();
};

#endif