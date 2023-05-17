#include <cstdio>
#include <string>
#include <vector>
#include <typeinfo>

// this is a function
// that returns a string
std::string &func()
{
    static std::string s = "this is a string";
    return s;
}

int main()
{
    /* this is the first
    example */

    // the type auto allows for
    // automatically declare x as
    // whatever return type the
    // function has. In this case,
    // string
    auto x = func(); // same as "std::string x = func();"

    // c_str() returns
    // a pointer to the
    // >> c-string representation <<
    // of the string object's value
    printf("x is %s\n", x.c_str());

    // typeid() queries
    // information of a type
    printf("type of x is %s\n", typeid(x).name());

    /* this is the second
    example */

    // this declares and
    // defines a vector
    std::vector<int> vi = {1, 2, 3, 4, 5};

    // this is how we loop
    // through a vector using
    // its iterator
    // for (std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
    for (auto it = vi.begin(); it != vi.end(); ++it)
    {
        printf("int is %d\n", *it);
    }

    return 0;
}