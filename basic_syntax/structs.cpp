#include <cstdio>

// structs defines
// or are datatypes
struct S
{
    int i;
    double d;
    const char *s;
};

int main()
{
    // note the datatype is
    // the identifier of the
    // struct
    S s1 = {3, 47.9, "const string"};

    // this is to modify
    // a struct field
    s1.i = 5;

    // the access of each field
    // in a struct is done like in
    // PYthon using dot (.)
    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s);

    return 0;
}