#include <cstdio>

// a function in c++ has to
// specify the return type.
// In this case void
void func()
{
    puts("This is inside func()");
}

// this is a function
// with arguments. It
// also has to specify the
// type of the arguments
void func2(int i)
{
    printf("This is inside func(%d)\n", i);
}

// this is a function that
// returns a result
int func_power2(int i)
{
    return i * i;
}

int main()
{
    puts("This is inside main()");

    // this is how we
    // call a function
    func();

    // this is how we call
    // a function with an argument
    func2(42);

    // here shows how we can
    // store the result of
    // a function
    int arg = 5;
    int res = func_power2(arg);
    printf("This is the result of func_power2(%d): %d\n", arg, res);

    return 0;
}