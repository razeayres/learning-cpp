#include <cstdio>

void func()
{
    puts("this is inside func()");
}

int main()
{
    puts("this is in the main function");

    // this shows how to work
    // with pointers to functions
    void (*pfunc)() = func; // this is how a pointer to a function is declared and defined
    (*pfunc)(); // this how the function is called through its pointer

    return 0;
}