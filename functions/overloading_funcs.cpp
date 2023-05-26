#include <cstdio>
#include <cmath>

const double d_pi = 3.14;

// these overloading functions.
// They have the same name, but
// depending on the combination
// of arguments, one specific function
// is called
double volume(double a) // 1 double number
{
    return pow(a, 3);
}

double volume(double r, double h) // 2 double numbers
{
    return d_pi * r * r * h;
}

double volume(double a, double b, double c) // 3 double numbers
{
    return a * b * c;
}

int main()
{
    // you can see they are
    // called the same way.
    // The only diference are
    // the number and types of
    // arguments
    printf("volume of a cube is %.3lf\n", volume(2.0));
    printf("volume of a cylinder is %.3lf\n", volume(2.0, 2.0));
    printf("volume of a cuboid is %.3lf\n", volume(2.0, 3.0, 4.0));

    return 0;
}