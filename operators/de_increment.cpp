#include <cstdio>

// this is a function
// to print a pointer
void print_p(int *p)
{
    printf("pointer is %p, value is %d\n", p, *p);
}

// there are two types of increment
// and decrement:
// if the isgn is put first as in ++i
// it increments right away (called pre-increment),
// but if it after the variable name as in
// i++, it is called post-increment, and only
// is triggered if the variable is used again
int main()
{
    // this how it operates
    // on values
    int x = 5;

    printf("x is %d\n", --x); // 4
    printf("x is %d\n", x++); // 4
    printf("x is %d\n", ++x); // 6

    // this is how it does
    // for pointers: it is used
    // to iterates through arrays;
    // it increments the number of bits
    // to jump to next element
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    print_p(++p); // value: 2, index: 2
    print_p(p++); // value: 2, index: 2
    print_p(p++); // value: 3, index: 3 (but if call again, increment is already there)

    return 0;
}