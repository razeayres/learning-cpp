#include <cstdio>
#include <cstdarg>

// this is a function with
// variable arguments
double average(const int count, ...) // these ... allows of variadic
{
    va_list ap; // this va_list declares the list that holds ...
    int i;
    double total = 0.0;

    va_start(ap, count); // this init the list ap with 'count' number of elements
    for (i = 0; i < count; ++i)
    {
        total += va_arg(ap, double); // this pops one element from the list
    }
    va_end(ap); // this closes the variadic list

    return total / count;
}

int main()
{
    // syntax is average(count, kargs)
    printf("Average: %lf\n", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));

    return 0;
}