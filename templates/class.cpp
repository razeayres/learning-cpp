#include <iostream>
#include <string>

template <typename T>
class Stack
{
    // these define some
    // static members shared by
    // all instances of this class
    static const int defaultSize = 10;
    static const int maxSize = 1000;

    // these are declaration of
    // private members
    int S_size;  // max size of the stack
    int S_top;   // current size of the stack
    T *stackPtr; // a pointer which will become an array

public:
    // "explicit" here prevents
    // implicit contructing
    // to work in the class
    explicit Stack(int s = defaultSize);

    // this declares and
    // implements the
    // destructor
    ~Stack()
    {
        if (stackPtr)
            delete[] stackPtr;
    }

    // these declares the
    // push and pop methods
    // using the template
    // for generic use
    T &push(const T &);
    T &pop();

    // these are just
    // utility methods
    bool isEmpty() const { return S_top < 0; }
    bool isFull() const { return S_top >= S_size - 1; }
    int top() const { return S_top; }
    int size() const { return S_size; }
};

// this is the implementation
// of the Stack<T> constructor
template <typename T>
Stack<T>::Stack(int s)
{
    S_size = s;
    stackPtr = new T[S_size];
    S_top = -1; // this init the current length
}

// these are the implementations
// of the push and pop generic
// methods
template <typename T>
T &Stack<T>::push(const T &i)
{
    // this not only works
    // as an index to the array, but
    // also modifies the variable
    // S_top
    return stackPtr[++S_top] = i;
}

template <typename T>
T &Stack<T>::pop()
{
    return stackPtr[S_top--];
}


int main()
{
    // this declares and
    // defines the Stack as
    // my_stack
    Stack<int> my_stack(5);

    // this prints the max size
    // of the stack
    std::cout << "my_stack size: " << my_stack.size() << std::endl;

    // this prints the current
    // length of the stack
    std::cout << "my_stack top: " << my_stack.top() << std::endl;

    // this populates the
    // stack
    for (int i : {1, 2, 3, 4, 5})
    {
        my_stack.push(i);
    }

    // this prints the current
    // length of the stack, starting
    // counting from 0
    std::cout << "my_stack top after pushes: " << my_stack.top() << std::endl;

    // this check if the
    // stack if full or not
    std::cout << "my_stack is " << (my_stack.isFull() ? "" : "not ") << "full" << std::endl;

    // this empties the
    // stack by popping all
    // elements out
    while (!my_stack.isEmpty())
    {
        std::cout << "popped " << my_stack.pop() << std::endl;
    }
    std::cout << "my_stack is " << (my_stack.isFull() ? "" : "not ") << "full" << std::endl;

    return 0;
}
