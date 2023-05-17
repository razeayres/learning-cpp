#include <cstdio>
#include <iostream>

int main()
{
    // couut overloads the
    // left bitwise shift operator
    // to send a string of characters 
    // to the console
    std::cout << "This uses cout class!" << std::endl;

    // cout can mix types
    std::cout << "This uses cout class! "  << 10 * 10 << " another string" << std::endl;
    return 0;
}