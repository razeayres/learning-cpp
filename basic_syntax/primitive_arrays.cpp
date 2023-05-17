// a primitive type is part of
// the language, and is not a derived
// type whic would be derived from class.
// For example like the STL arrays

#include <cstdio>

int main()
{
    int a[5];

    a[0] = 1; // <- [1,,,,]
    // *pa = 1; <- this has exactly the same effect as above
    // the pointer always point to the first element when doing
    // like this

    // this defines an int and defines the address
    // of the array to a pointer
    int *pa = a;
    *pa = 2; // <- [2,,,,]

    // this increments the pointer
    // and will point to the second element
    ++pa;        // jump to next element
    *pa = 3;     // <- [2,3,,,]
    *(++pa) = 4; // <- [2,3,4,,]

    // this init an array with
    // a list
    int b[5] = {1, 2, 3, 4, 5};
    // int b[] = {1, 2, 3, 4, 5}; <- this sets length dynamically

    // elements can be accessed by index
    // like in python
    printf("%d", b[2]); // <- this returns 3

    // values can be also updated
    // by index access
    b[2] = 42;
    printf("%d", b[2]); // <- this returns 42

    return 0;
}