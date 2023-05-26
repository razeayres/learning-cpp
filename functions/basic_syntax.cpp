#include <cstdio>

// this is the basic
// syntax of a function
// that does not return
// anything and does not
// have any arguments
void func()
{
    puts("this is inside func()");
}

int main()
{
    puts("this is in the main function");
    func(); // this is how a function is called

    return 0;
}