#include <iostream>
#include <exception>

/**
 * this shows how to
 * create a class for handling
 * exceptions
*/
namespace BW
{
    class E : public std::exception // this is how we make inheritance
    {
        const char *msg;
        E();

    public:
        E(const char *s) noexcept(true) : msg(s) {}
        const char *what() const noexcept(true) { return msg; }
    };
}

// these are simpler versions
// of different exceptions
const BW::E e_oops("oops!");
const BW::E e_bad("bad code!");
const BW::E e_worse("do not do that!");

// this is function
// to show how to throw
// an exception
void broken()
{
    throw std::exception();
    // throw BW::E("oops!");
    // throw e_worse
}

int main()
{
    // to throw an exception
    // we need to use a try-catch
    // statement
    try
    {
        broken(); // this calls the function that fails
    }
    // exceptions must
    // be catched here
    catch (std::exception &e) // (BW::E &e)
    {
        // this is how we
        // print the error
        // message
        std::cout << e.what() << std::endl;
    }

    return 0;
}
