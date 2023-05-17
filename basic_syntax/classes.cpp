#include <cstdio>

// this is a simple
// class
class simple_class
{
    // this field cannot be accessed
    // from outside class
    int int_field = 0;

// public means it
// can be accessed
// from outside the
// class
public:
    // these are to set setters
    // and getters
    void setValue(int value) { int_field = value; }
    int getValue() { return int_field; }
}; // <- it needs to finish with ;

int main()
{
    int int_field = 99;

    // this the declaration
    // of the class
    simple_class my_class;

    // this modifies the
    // field inside the class
    // through the setter
    my_class.setValue((int_field + 1) * 2);

    // these are to print
    // int_field value
    // in- and outside the class
    printf("int_field inside class is %d\n", my_class.getValue());
    printf("int_field outside class is %d\n", int_field);

    return 0;
}