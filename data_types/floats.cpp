#include <iostream>
#include <cstdint>
#include <cstdio>

// this sets a const
// value called byte
const size_t byte = 8;

// this is a function
// created to evaluate
// and test types of int
void test_types()
{
    // any value here
    // is aumatically converted to
    // float format
    float f = 5e2;
    std::cout << f << std::endl;

    // this is a test to
    // experiment lack of
    // precision in operations
    f = .1 + .1 + .1; // this results in 0.30000564 (rounding error)
    if (f == 0.3)
    {
        puts("true");
    }
    else
    {
        puts("false"); // this will be triggered because of lack of precision
    }
}

// this is a function with
// procedure to print all
// memory sizes of different
// float types
void print_sizes()
{
    float f;
    double df;
    long double ldf;

    printf("Size of float is %zd bits\n", sizeof(f) * byte);
    printf("Size of double is %zd bits\n", sizeof(df) * byte);
    printf("Size of long double is %zd bits\n", sizeof(ldf) * byte);
}

int main()
{
    // size_t can store the maximum size
    // of a theoretically possible object
    // of any type (including array)
    printf("Size of size_t is %zd bits\n", sizeof(size_t) * byte);

    test_types();
    print_sizes();

    return 0;
}