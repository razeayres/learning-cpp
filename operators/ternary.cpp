#include <cstdio>

int main()
{
    int a = 5;
    int b = 10;

    const char *s;
    s = a > b ? "yes" : "no";
    // the ternary operator
    // allows for in-line ifelse.
    // the syntax is simple:
    // test ? true : false

    return 0;
}