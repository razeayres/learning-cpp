#include <cstdio>

int main()
{
    // these are declarations and
    // definitions of variables
    int a = 0;
    int b = 5;

    // 
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is smaller than %d\n", a, b);
    }

    // any number other than 0 is true,
    // and zero is always false
    int cond_test = 0;
    if (cond_test) 
    { 
        puts("condition is true");
    }
    else  
    {
        puts("condition is false");
    }

    return 0;
}