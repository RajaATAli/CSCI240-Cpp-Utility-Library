#ifndef STACK_HEADER
#define STACK_HEADER

template <class T>
class Stack 
{
public:
    // Constructor
    Stack();

    // Destructor
    ~Stack();

    // Member functions
    const T* pop();
    void push(T element);
    unsigned int size() const;

private:
    T* m_Elements;        // Elements array
    unsigned int m_Size;  // Current size of the stack
    unsigned int m_Capacity;  // Capacity of the stack
};

// Move elements utility function
template <class T>
static void move_elements(T *from, T *to, int amount) {
    for (int i = 0; i <= amount; i++) {
        to[i] = from[i];
    }
}

// Default capacity definition
#define DEFAULT_CAPACITY 25

// Constructor implementation
template <class T>
Stack<T>::Stack() 
    : m_Size(0), m_Capacity(DEFAULT_CAPACITY) {
    m_Elements = new T[m_Capacity];
}

// Destructor implementation
template <class T>
Stack<T>::~Stack() {
    delete[] m_Elements;
}

// Push method implementation
template <class T>
void Stack<T>::push(T element) {
    if (m_Size == m_Capacity) {
        m_Capacity *= 2;
        T* new_elements = new T[m_Capacity];
        move_elements(m_Elements, new_elements, m_Size);
        delete[] m_Elements;
        m_Elements = new_elements;
    }
    m_Elements[m_Size] = element;
    m_Size++;
}

// Pop method implementation
template <class T>
const T* Stack<T>::pop() {
    if (m_Size == 0) {
        return nullptr;
    }
    m_Size--;
    return m_Elements + m_Size;
}

// Size method implementation
template <class T>
unsigned int Stack<T>::size() const {
    return m_Size;
}

/* Note on limitations and possible extensions */

#endif // STACK_HEADER