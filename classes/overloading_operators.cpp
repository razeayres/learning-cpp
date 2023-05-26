#include <iostream>
#include <string>
#include <cstdio>

class Rational
{
    int n = 0;
    int d = 1;

public:
    Rational(int numerator = 0, int deminator = 1)
        : n(numerator), d(deminator){}; // implementation is directly here
    ~Rational();

    // these are getters
    // methods
    int numerator() const { return n; };
    int deminator() const { return d; };

    // these are additional
    // class methods
    Rational reduce() const;        // this reduces a fraction
    std::string string() const;     // this returns a formatted STL string
    std::string raw_string() const; // this returns a no-reduced STL string

    // these are the
    // overloading operators
    // declarations
    Rational &operator=(const Rational &);
    Rational operator+(const Rational &) const;
    Rational operator-(const Rational &) const;
    Rational operator*(const Rational &) const;
    Rational operator/(const Rational &) const;
};

// this implements
// the destructor
Rational::~Rational()
{
    n = 0;
    d = 1;
}

// this implements the
// assignment operator
Rational &Rational::operator=(const Rational &rhs)
{
    if (this != &rhs)
    {
        n = rhs.numerator();
        d = rhs.deminator();
    }
    return *this;
}

// this is to solve
// fractions that has
// n < d
Rational Rational::reduce() const
{
    if (n == 0 || d <= 3)
    {
        return *this;
    }

    for (int div = d - 1; div; --div)
    {
        if (n % div == 0 && d % div == 0)
        {
            return Rational(n / div, d / div); // this is recursive
        }
    }
    return *this;
}

// this prints the
// string with the values
// of the fractions solved.
// e.g., 5/2 would be "2 1/2" (2.5) 
std::string Rational::string() const
{
    if (d == 0)
    {
        return "[NAN]";
    }
    if (d == 1 || n == 0)
    {
        return std::to_string(n);
    }

    int abs_n = abs(n); // gets the absolute value
    if (abs_n > d)      // if the numerator is bigger than denominator
    {
        int whole = n / d;
        int remainder = abs_n % d;
        if (remainder) // if there is any remainder
        {
            return std::to_string(whole) + " " + Rational(remainder, d).string(); // this is recursive
        }
        else // if the calculation results in an integer
        {
            return std::to_string(whole);
        }
    }
    else // if denominator is bigger than numerator
    {
        return reduce().raw_string();
    }
}

std::string Rational::raw_string() const
{
    // this returns a string
    // like "7/2"
    return std::to_string(n) + "/" + std::to_string(d);
}

// this overloads the left-shift
// operator used in std::cout
std::ostream &operator<<(std::ostream &o, const Rational &r) // this standard arguments for cout using <<
{
    return o << r.raw_string();
}

// these are to overload
// all basic operators
Rational Rational::operator+(const Rational &rhs) const
{
    return Rational((n * rhs.d) + (d * rhs.n), d * rhs.d);
}

Rational Rational::operator-(const Rational &rhs) const
{
    return Rational((n * rhs.d) - (d * rhs.n), d * rhs.d);
}

Rational Rational::operator*(const Rational &rhs) const
{
    return Rational(n * rhs.n, d * rhs.d);
}

Rational Rational::operator/(const Rational &rhs) const
{
    return Rational(n * rhs.d, d * rhs.n);
}

int main()
{
    Rational f7p1 = 7; // 7/1 - this is because assingment here only populates n (d is default = 1) - it is called implicit constructor
    std::cout << "f7p1 is: " << f7p1 << std::endl;

    Rational f5p3(25, 15); // 5/3 - this uses the constructor with arguments to assign both members d and n
    std::cout << "f5p3 is: " << f5p3 << std::endl;
    std::cout << "f5p3 is " << f5p3.string() << std::endl;

    std::cout << std::endl;
    std::cout << f7p1 << " + " << f5p3 << " = " << f7p1 + f5p3 << std::endl;
    std::cout << f7p1 << " - " << f5p3 << " = " << f7p1 - f5p3 << std::endl;
    std::cout << f7p1 << " * " << f5p3 << " = " << f7p1 * f5p3 << std::endl;
    std::cout << f7p1 << " / " << f5p3 << " = " << f7p1 / f5p3 << std::endl;

    return 0;
}