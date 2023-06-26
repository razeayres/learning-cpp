#include <iostream>
#include <string>

int main()
{
    // this is to declare and
    // define a string
    std::string my_str = "this is a string";

    // this declares an
    // iterator which
    // can be used to loop
    // for chars in a string
    std::string::iterator it;

    // these are to show
    // how to get 
    // size & length
    std::cout << my_str.size() << std::endl;
    std::cout << my_str.length() << std::endl;

    // use operator + 
    // for concatenation
    std::string my_other_str = "this is also a string";
    std::cout << my_str + " : " + my_other_str << std::endl;
    std::cout << std::endl;

    // use operator ==
    // to compare strings
    std::cout << (my_str == my_other_str ? "equal" : "not equal") << std::endl;
    std::cout << std::endl;

    // this is to show
    // how to iterate over
    // chars in a string
    // using range-based loops
    for (char c : my_str)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // this shows how to
    // use replace
    my_str.replace(5, 2, "ain't");
    std::cout << my_str << std::endl;

    // this shows how to
    // substring a string
    std::cout << my_str.substr(5, 5) << std::endl;

    return 0;
}
