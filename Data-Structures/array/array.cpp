#include "Array.h"
#include <iostream>

Array::Array(int capacity) : size_(0), capacity_(capacity) 
{
  elements_ = new int[capacity_];
}

Array::~Array() 
{
  delete[] elements_;
}

void Array::Insert(int element, int index) 
{
  if (index < 0 || index > size_) 
  {
    std::cout << "Invalid index" << std::endl;
    return;
  }

  if (size_ == capacity_) 
  {
    // Resize the array
    int* new_elements = new int[capacity_ * 2];
    for (int i = 0; i < size_; i++) 
    {
      new_elements[i] = elements_[i];
    }
    delete[] elements_;
    elements_ = new_elements;
    capacity_ *= 2;
  }

  for (int i = size_ - 1; i >= index; i--) 
  {
    elements_[i + 1] = elements_[i];
  }
  elements_[index] = element;
  size_++;
}

void Array::Delete(int index) 
{
  if (index < 0 || index >= size_) 
  {
    std::cout << "Invalid index" << std::endl;
    return;
  }

  for (int i = index; i < size_ - 1; i++) 
  {
    elements_[i] = elements_[i + 1];
  }
  size_--;
}

void Array::Traverse(void (*operation)(int)) 
{
  for (int i = 0; i < size_; i++) 
  {
    operation(elements_[i]);
  }
}

int Array::Search(int element) 
{
  for (int i = 0; i < size_; i++) 
  {
    if (elements_[i] == element) 
    {
      return i;
    }
  }
  return -1;
}

void Array::Update(int element, int index) 
{
  if (index < 0 || index >= size_) 
  {
    std::cout << "Invalid index" << std::endl;
    return;
  }

  elements_[index] = element;
}

int Array::GetSize() 
{
  return size_;
}

int Array::GetCapacity() 
{
  return capacity_;
}
