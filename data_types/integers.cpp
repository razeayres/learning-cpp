// 1. Possible types of integers in c++:
// char
// short int
// int
// long
// long long int
//
// they can be signed (from negative to positive)
// or unsigned (only positive values). To use
// unsigned, it is only need add the keyword before
// the type: unsigned int
//
// 2. If needed to alocate especific size
// of memory, #include <cstdint> provides
//
// specific types:
// Signed       Unsigned (only positives)
// int8_t       uint8_t
// int16_t      uint16_t
// int32_t      uint32_t
// int64_t      uint64_t

#include <iostream>
#include <cstdint>
#include <cstdio>

// this is a function
// created to evaluate
// and test types of int
void test_types()
{
    int my_int = 1;
    long long int my_long_long = 123456789;

    std::cout << my_int << std::endl;
    std::cout << my_long_long << std::endl;

    // tha main advantage of using
    // these data types is that
    // they have predictable sizes,
    // so regardless of the system or
    // compiler, sizes will be the same
    int8_t my_int8;
    my_int8 = 8;
    std::cout << unsigned(my_int8) << std::endl; // this works with unsigned()
    printf("the value is %d.\n", my_int);        // this doesn't work
}

// this is a function with
// procedure to print all
// memory sizes of different
// int types
void print_sizes()
{
    char c = 0;
    short int si = 0; // it can be also used as short
    int i = 0;
    long int li = 0;       // it can also be used as long
    long long int lli = 0; // it can also be used as long long

    printf("Size of char is %zd bits\n", sizeof(c) * 8); // sizeof() returns bytes (when * 8, it becomes bits)
    printf("Size of short int is %zd bits\n", sizeof(si) * 8);
    printf("Size of int is %zd bits\n", sizeof(i) * 8);
    printf("Size of long int is %zd bits\n", sizeof(li) * 8); // this one is 32 bits on this machine
    printf("Size of long long int is %zd bits\n", sizeof(lli) * 8);
}

int main()
{
    test_types();
    print_sizes();

    return 0;
}