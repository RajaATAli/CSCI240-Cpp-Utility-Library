#ifndef STACK_HEADER
#define STACK_HEADER

template <class T>
class Stack 
{

public:

    /*
    *   Constructor that will create a heap allocated array of 
    *   default capacity elements
    */
    Stack();

    /*
    *  Destructor for cleaning up the elements array   
    */
    ~Stack();

    /*
    * "remove" an element from the top of the stack and return a read-only pointer to that element
    */
    const T* pop();

    /*
    * Perform any needed re-allocation and "add" an element to the top (size + 1) of the stack
    */
    void push(T element);

    /*
    * Return the size of the stack
    */
    unsigned int size() const;


private:
    /*
    * Elements will be allocated on the heap
    *
    * This is because we will manage the lifetime of this array of elements
    * from within the Stack class as the size of the stack increases
    */
    T* m_Elements;

    /*
    * m_Size represents how many elements have been pushed onto the stack
    */
    unsigned int m_Size;

    /*
    * m_Capacity will be used to determine wether or not we need to re-allocate the array
    * of elements into a larger array with an even larger capacity.
    * 
    * The concept of using a capacity to determine re-allocation is a good design choice because
    * it reduces the amount of heap allocations we would need to do if for example we only increased the 
    * capacity of the array linearly with respect to the array size. Meaning that we would have to perform
    * a heap allocation every time we pushed an element onto the stack, which would be slow, so we just allocate a
    * larger chunk of memory than what we may need now to save us time later.
    */
    unsigned int m_Capacity;

};

template <class T>
static void move_elements(T *from, T *to, int amount) {
    for (int i = 0; i <= amount; i++)
        to[i] = from[i];
}

#define DEFAULT_CAPACITY 25

template <class T>
Stack<T>::Stack() 
    : m_Capacity(DEFAULT_CAPACITY), m_Size(0) {

    m_Elements = new T[m_Capacity];

}

template <class T>
Stack<T>::~Stack() {
    delete[] m_Elements;
}

template <class T>
void Stack<T>::push(T element) {

    if (m_Size == m_Capacity) {

        //Grow the capacity by double, this is arbitrary and there can be many ways to scale the capacity
        m_Capacity *= 2; 

        //Allocate an array of T elements using our new capacity. This will replace our elements array later
        T* new_elements = new T[m_Capacity];  

        //Move all of the elements from our current array into the new, larger, empty array
        move_elements(m_Elements, new_elements, m_Size);

        //Make sure to clean up our old array
        delete[] m_Elements;

        //Update the pointer to point to our new array
        m_Elements = new_elements;
    }
    
    //set the pushed element onto the top of the stack
    m_Elements[m_Size] = element;
    
    m_Size++;
}

template <class T>
const T* Stack<T>::pop() {
    
    //Nothing is in our stack to return so return a null pointer
    if (m_Size == 0) {
        return nullptr;
    }

    //We've "removed" an element so decrement the size
    m_Size--;

    //return the pointer to the top of the stack
    return m_Elements + m_Size;
}

template <class T>
unsigned int Stack<T>::size() const {
    return m_Size;
}

/* NOTE:
 *
 * There are limitations to this implementation of the stack that you may need in a real application.
 * 
 * Some examples
 *  - The type 'T' must be default-constructible
 *  - T must also be copyable (no push(T& element) method)
 * 
 * These are undealt with to just get to the point of what a stack implementation would look like
 * and can be templated out even further to maximize type compatibilty. (Check C++ STL Stack implementation)
 * 
 */

#endif // STACK_HEADER