#include <cstdio>
#include <typeinfo>

int a;
long int b;

int main()
{
    // this tests if a and b
    // are the same type
    if (typeid(a) == typeid(b))
    {
        puts("same");
    }
    else
    {
        puts("different");
    }

    printf("Type is %s\n", typeid(int).name());

    return 0;
}