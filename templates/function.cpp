#include <iostream>
#include <string>

// this is a powerful
// alternative to C-style
// pre-processors macros

template <typename T> // this declares the template

// this uses the template
// to declare and define
// a generic-use function
// that accepts different
// types as inputs
T maxof(T a, T b)
{
    return (a > b ? a : b);
}

int main()
{
    std::cout << maxof<int>(7, 9) << std::endl;

    return 0;
}