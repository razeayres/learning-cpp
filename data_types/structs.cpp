#include <cstdio>

// this declares
// a struct and its
// fields
struct car
{
    int id;
    const char *color;
    const char *brand;
};

int main()
{
    // this is the new c++
    // way to init structs
    car Fit = {1, "Green", "Honda"};

    // this how it was done
    // in versions before 2012
    Fit.id = 1;
    Fit.color = "Green";
    Fit.brand = "Honda";

    printf("Via value: %s is the brand of a %s car with id %d\n",
           Fit.brand, Fit.color, Fit.id); // fields are accessed by dot notation

    // this is to show how
    // to do it using pointers
    car *Fit_pointer = &Fit;

    printf("Via pointer: %s is the brand of a %s car with id %d\n",
           Fit_pointer->brand, Fit_pointer->color, Fit_pointer->id); // fields are accessed by arrow notation

    return 0;
}