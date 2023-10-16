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

// Other function implementations

// Check index validity
// Shift elements to left starting from index?
template<typename T>
void Array<T>::DeleteAt(int index){

}

template<typename T>
T Array<T>::Access(int index) const{

}

template<typename T>
void Array<T>::Update(int index, const T& value){

}

template<typename T>
void Array<T>::Resize(int new_size){

}

#endif