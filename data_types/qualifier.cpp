#include <cstdio>

// there are a few types of qualifiers
// and they can be divided into two
// distinct groups:
//
// CV Qualifiers    Storage Duration
// const            static
// mutable          register
// volatile         extern

class S
{
public:
    int static_value()
    {
        static int x = 7; // this is like a global variable for all instances of this class
        return ++x;
    }
};

int func()
{
    // int x = 7;
    static int x = 7; // this is like a global variable for everytime this function is called
    return ++x;
}

int main()
{
    int i = 42;
    // const int i = 42;
    i = 72; // this redefine the integer if it is not const
    printf("The integer is %d\n", i);

    // this will accumulate
    // the x++
    i = func(); // this returns 8
    i = func(); // this returns 9
    i = func(); // this returns 10
    printf("The integer is %d\n", i);

    // this will accumulate
    // the x++ even with different
    // instances of the class
    S s1;
    S s2;
    S s3;
    printf("The integer is %d\n", s1.static_value()); // this returns 8
    printf("The integer is %d\n", s2.static_value()); // this returns 9
    printf("The integer is %d\n", s3.static_value()); // this returns 10

    return 0;
}