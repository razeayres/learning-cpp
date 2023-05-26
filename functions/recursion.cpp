#include <cstdio>

// this is a recursive function.
// It calls itself multiple times
// until find an answer
unsigned long int factorial(unsigned long int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        printf("%ld * %ld\n", n, n - 1);
        return n * factorial(n - 1);
    }
}

int main()
{
    unsigned long int n = 5;
    // 5! = 5 * 4 * 3 * 2 * 1
    printf("Factorial of %ld is %ld\n", n, factorial(n));

    return 0;
}