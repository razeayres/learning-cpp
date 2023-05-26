#include <cstdio>

/**
 * private = members and methods
 * only accessible inside the class
 *
 * public = members and methods
 * can bed accessed anywhere
 */
class my_class
{
    // these are private members
    // by default
    int i = 0;

public:
    // it is possible to declare
    // and define methods directly
    // like the ones below
    // void setValue(int value) { i = value; }
    // int getValue() { return i; }
    
    // but we also might see only
    // the declarations here, and
    // their definitions out of
    // this statement (this is usually
    // called interface)
    void setValue(int value);
    int getValue();
};

// this is how we define or
// re-define methods of a
// class from outside the
// interface
void my_class::setValue(int value)
{
    i = value;
}

int my_class::getValue()
{
    return i;
}


// this is the main
// function called
// by the OS
int main()
{
    int i = 47;
    my_class rodrigo; // this is the declaration of the class

    // this sets the value
    // i to the member i
    rodrigo.setValue(i);

    // this gets the member i
    // value and return to main()
    printf("value is %d\n", rodrigo.getValue());

    return 0;
}