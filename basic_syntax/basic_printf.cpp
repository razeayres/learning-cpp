#include <cstdio>

int main()
{
    // this is a declaration
    // of the variable, where we
    // allocate space for data
    int x;

    // this is its definition,
    // where we actually store the
    // data
    x = 42; // <- here this is a statement

    // these are both examples of
    // how to use printf() to
    // print formatted string
    // 1. just print the integer
    // inside a string
    printf("x is %d\n", x);

    // 2. this shows that printf()
    // allows for re-define the int
    // inside the function
    printf("x is %d\n", x = 73); // <- here x = 73 is an expression because it returns a value

    return 0;
}