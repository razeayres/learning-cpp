
#include <cstdio>

int &f(int &i)
{
    return ++i;
}

int main()
{
    int i = 5;
    int &ir = i; // stores the reference of i as ir
    // ir = 10;
    printf("i is %d\n", i);

    // f(i);
    f(i) = 42;
    printf("f() is %d\n", i);
    printf("f() is %d\n", f(i));
    
    return 0;
}