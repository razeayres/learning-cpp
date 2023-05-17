#include <cstdio>

int main() {
    // this declares and defines x
    // as int 42
    int x = 42;

    // this stores the reference
    // of x into the pointer xp,
    // which can only return value
    // by using *xp
    int *xp = &x;
    // int *xp;
    // xp = %x;

    // xp can store a value directly
    // changing x, by using * to depointer
    *xp = 19;

    // this defines y as a
    // reference of x
    int &y = x; // <- this cannot be changed once defined
    // const &y = x; // <- this is the recommended behaviour

    printf("The value of x is %d\n", x);
    printf("The value of *xp is %d\n", *xp);
    printf("The value of y is %d\n", y);
}