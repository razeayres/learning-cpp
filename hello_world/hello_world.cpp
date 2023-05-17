#include <cstdio>
#include <iostream>

// this program shows different ways
// of printing on console using c++
int main()
{
    // this one uses cout
    // from std library
    std::cout << "Hello, World from cout!" << std::endl;

    // this one uses puts()
    puts("Hello, World fomr puts!");

    // this one uses printf(),
    // which is mainly used when
    // string needs formatting
    printf("Hello, World from printf!\n");
}