#include <cstdio>

#define NULL (0LL) /* common c++ definition */

// these are two overloading
// functions that are called
// depending on kind of input
void f(int i) // receives an int
{
    printf("int is %d\n", i);
}

void f(const char *s) // receives a pointer C-string
{
    printf("pointer is %p\n", s);
}

int main()
{
    // f(NULL); // NULL is ambigous here
    f(nullptr); // nullptr is a pointer value of any type
    return 0;
}