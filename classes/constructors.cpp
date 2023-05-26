#include <cstdio>
#include <string>

// --- CONSTANTS DEFINITION ---
// these are to declare
// and define some constants
const std::string UNK = "unknown";
const double DEFAULT_PRICE = 0.0;

// --- INTERFACE ---
// this is the interface
// of the class
class Car
{
    // these are private
    // members of class
    // Car
    std::string m_name = "";
    std::string m_brand = "";
    std::string m_color = "";
    double m_price = 0.0;

public:
    // these are the overloading
    // constructors for class Car
    Car();                                                                                                 // this a default constructor
    Car(const std::string &name, const std::string &brand, const std::string &color, const double &price); // this is a complete constructor
    Car(const Car &);                                                                                      // this is a copy constructor to copy Car objects

    // this is the destructor of
    // the class Car
    ~Car();

    // these are some
    // class methods
    Car &operator=(const Car &);
    void print() const; // is const qualified
};

// --- IMPLEMENTATION ---
// these are the implementation
// of the class contructors
Car::Car()
    // these are called initializers
    : m_name(UNK), m_brand(UNK), m_color(UNK), m_price(DEFAULT_PRICE) // these are to init all members with default values from constants
{
    puts("This is the default constructor.");
}

Car::Car(const std::string &name, const std::string &brand, const std::string &color, const double &price)
    : m_name(name), m_brand(brand), m_color(color), m_price(price) // these are to init the class with the values in the arguments
{
    puts("This is the constructor with arguments.");
}

Car::Car(const Car &obj)
{
    puts("This is the copy constructor.");
    m_name = obj.m_name;
    m_brand = obj.m_brand;
    m_color = obj.m_color;
    m_price = obj.m_price;
}

// this is the implementation
// of the destructor
Car::~Car()
{
    puts("This is the destructor.");
    m_name = "";
    m_brand = "";
    m_color = "";
    m_price = 0.0;
}

// these are the implementation
// of some class methods
void Car::print() const
{
    printf("%s, %s, %s, %f\n", m_name.c_str(), m_brand.c_str(), m_color.c_str(), m_price);
}

Car &Car::operator=(const Car &obj) // this overloads the asssignment operator (=)
{
    puts("This is the assignment operator.");
    if (this != &obj)
    {
        m_name = obj.m_name;
        m_brand = obj.m_brand;
        m_color = obj.m_color;
        m_price = obj.m_price;
    }
    return *this;
}

// --- MAIN FUNC ---
// this is the main
// function called
// by OS
int main()
{
    // this is to show
    // how to use the 
    // default constructor
    Car my_car;
    my_car.print();

    // this uses the
    // constructor with
    // arguments
    const Car my_Celta("Celta", "Chevy", "Silver", 17000);
    my_Celta.print();

    // this uses the copy
    // constructor, which
    // can be done by two
    // different ways
    const Car my_other_Celta(my_Celta); // or "const Car my_other_Celta = my_Celta;"
    my_other_Celta.print();

    // this uses the
    // assignment operator
    my_car = my_other_Celta;
    my_car.print();

    return 0;
}