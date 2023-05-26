#include <cstdio>

// this is a function that
// receives an int called i
// as argument. In this way,
// the argument is passed value
// meanning that a copy of i is
// encapsulated in the function
void func_with_int(int i)
{
    i = 0; // so doing this, changes the value of i inside the function only

    puts("this is inside func_with_int()");
    printf("the value is %i in func_with_int()\n", i);
}

// this is an example of
// function that receives a
// reference and does not
// encapsulate a value copy
void func_with_ref_int(const int &i)
{ // this says that it receives the reference of i (using const here is excelent practice)
    // i = 0; // this changes the value everywhere

    puts("this is inside func_with_ref_int()");
    printf("the value is %i in func_with_ref_int()\n", i);
}

// this is an example
// of a function
// that receives a
// pointer to i
void func_with_pointer_int(int *i)
{ // this says that it receives a pointer to i' here * is a type operator
    // here we use * to
    // de-reference the
    // pointer
    *i = 21; // this changes the value everywhere

    puts("this is inside func_with_pointer_int()");
    printf("the value is %i in func_with_pointer_int()\n", *i);
}

// this is the main
// function
int main()
{
    puts("this is in the main function");

    int i = 42;
    printf("the value of i is %i\n", i);

    // 1. this is an example
    // on how to pass arguments
    // as values to functions
    func_with_int(42);
    printf("the value is %i in main()\n", i);

    // 2. this shows how to
    // pass a reference. It is
    // exactly the same thing
    // as passing by value
    func_with_ref_int(i);
    printf("the value is %i in main()\n", i);

    // 3. this shows how to
    // pass a pointer
    func_with_pointer_int(&i);
    printf("the value is %i in main()\n", i);

    return 0;
}