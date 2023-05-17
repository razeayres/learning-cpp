#include <cstdio>

int main()
{
    int x = 47;
    int y = 5;
    printf("x is %d\n", x);
    printf("y is %d\n", y);

    // + is sum
    // - is substraction
    // / is division
    // % is remaninder from division
    // * is multiplication
    int z = x % y;
    printf("z is %d\n", z);

    // these are examples on
    // how to use unary operators
    printf("z is %d\n", -z);
    printf("z is %d\n", +z);

    return 0;
}