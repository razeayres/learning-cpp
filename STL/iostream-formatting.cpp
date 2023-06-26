#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    // this declares the string
    // that will hold the input
    std::string istr;
    std::cout << "Prompt: ";

    // this is populates istr
    // whith the input. In this case
    // one word at a time
    // std::cin >> istr;
    // std::cout << "Input: " << istr << std::endl;

    // this is the approach
    // to get entire lines
    char buf[128];
    std::cin.getline(buf, sizeof(buf));
    std::cout << "Input: " << buf << std::endl;

    return 0;
}
