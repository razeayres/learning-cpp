#include <cstdio>

// this is to show
// types of relational operators
// in c++
int main()
{
    int a = 5;
    int b = 42;

    // == is equal
    // != is different
    // > is greater than
    // < is smaller than
    if (a != b)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }

    // conditionals retun a logical
    // value (0 for false; >0 for true)
    printf("logical value is %d\n", a != b);

    return 0;
}