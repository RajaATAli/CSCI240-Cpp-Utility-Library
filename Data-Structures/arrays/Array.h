#ifndef ARRAY_H
#define ARRAY_H

template<typename T>

class Array {
  // Add Member Attributes Here (characteristic/property)
  private:
  T* data; // Dynamically allocate memory
  int size; // Total number of elements array can hold
  int length; // Number of elements currently in the array


  // Add Methods here (actions/behaviors)
  /*
  1. Insert -> Add an element at specified position
  2. Delete -> Remove an element from specified position
  3. Access -> Retrieve an element at a specified position
  4. Update -> Modify an element at a specified position
  4. Resize -> Increase or decrese the size of the array

  */
  public:
  // Constructor
  Array();
  Array(int s);

  // Destructor
  ~Array();  
    
  // Prototypes
  void Insert(int index, const T& element);
  void DeleteAt(int index);
  T Access(int index) const;
  void Update(int index, const T& value);
  void Resize(int new_size);

};

// Default Constructor
template<typename T>
Array<T>::Array() {
    size = 100;
    length = 0;
    data = new T[100];
}

// Parameterized Constructor
template<typename T>
Array<T>::Array(int s) {
    size = s;
    length = 0;
    data = new T[s];
}

// Destructor
template<typename T>
Array<T>::~Array() {
    delete[] data;
}

// Inserting
template<typename T>
void Array<T>::Insert(int index, const T& element) {
    if (index < 0 || index > size) {
        std::cerr << "Error: Cannot insert because the index is out of bounds." << std::endl;
        return;
    }
      
    if (length == size) {
        std::cerr << "Error: Cannot insert more as the array is full." << std::endl;
        return;
    }
    // Shifting elements by one after the index
    // Start from the end to make sure you don't overwrite anything
    for (int i = length; i > index; i--) {
        data[i] = data[i-1];
    }
      
    data[index] = element;
    length++;
}

// You are deleting the element, not replacing it
template<typename T>
void Array<T>::DeleteAt(int index){
    // Check for valid index
    if (index < 0 || index >= length){
        std::cerr << "Error: Cannot insert because the index is out of bounds." << std::endl;
        return;
    }

    // Decrease length by one because that specific block will be deleted
    // Actually the last block is deleted because the array to the right of the index will take its place (shift to the left from deleted index)
    for (int i = index; i < length - 1; i++){
        data[i] = data[i+1];
    }

    length --;
}

// Other function implementations

template<typename T>
T Array<T>::Access(int index) const{
    if (index < 0 || index >= length){
        std::cerr << "Error: Cannot access because the index is out of bounds." << std::endl;
        return T(); // Default constructed value
    }
    
    else {
        return data[index];
    }

}

template<typename T>
void Array<T>::Update(int index, const T& value){
    if (index < 0 || index >= length){
        std::cerr << "Error: Cannot update because the index is out of bounds." << std::endl;
        return;
    }

    else {
        data[index] = value;
    }

}


// You should be altering the capacity (`size`) and not `length`
template<typename T>
void Array<T>::Resize(int new_size){
    // Check if the new size is valid
    if (new_size <= 0) {
        std::cerr << "Error: Invalid size provided for resize." << std::endl;
        return;
    }

    // Allocate new memory
    T* new_data = new T[new_size];

    // Copy old data to the new block
    for (int i = 0; i < std::min(length, new_size); i++) {
        new_data[i] = data[i];
    }

    // Delete old data
    delete[] data;

    // Update the data pointer and size
    data = new_data;
    size = new_size;

    // If the new size is smaller than the current length, adjust the length
    if (new_size < length) {
        length = new_size;
    }
}


#endif