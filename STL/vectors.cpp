#include <vector>
#include <string>
#include <iostream>

int main()
{
    // this init the array
    std::vector<int> my_vec = {1, 2, 3, 4, 5};

    // this shows how to
    // use a few methods
    std::cout << "size:" << my_vec.size() << std::endl;
    std::cout << "front:" << my_vec.front() << std::endl;
    std::cout << "back:" << my_vec.back() << std::endl;

    /**
     * this is the old way
     * of iterating through a
     * vector in c++
     */
    std::vector<int>::iterator itbegin = my_vec.begin();
    std::vector<int>::iterator itend = my_vec.end();
    for (std::vector<int>::iterator it = itbegin; it < itend; ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    /**
     * this is the new way
     * of doing that in c++.
     * Note that it doesn't
     * require iterators
     * declarations and use
     * the type auto
     */
    for (auto it = my_vec.begin(); it < my_vec.end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    /**
     * this is the most simple
     * way of doing that. It uses
     * range-based loop
     */
    for (int i : my_vec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // this is for accessing
    // elements by index
    std::cout << "element at 5: " << my_vec[5] << std::endl;
    // std::cout << "element at 5: " << my_vec.at(5) << std::endl; // doesn't work on Windows

    // this inserts the number 42
    // at the 4th slot
    my_vec.insert(my_vec.begin() + 3, 42);
    for (int i : my_vec)
    { // this prints it
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // this deletes the 6th
    // element
    my_vec.erase(my_vec.begin() + 5);
    for (int i : my_vec)
    { // this prints it
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // this adds an element
    // at the end of the vector
    my_vec.push_back(37);
    for (int i : my_vec)
    { // this prints it
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // from C-array
    const static size_t size = 3;
    int my_arr[size] = {1, 2, 3};
    std::vector<int> my_vec2(my_arr, my_arr + size); // convert into vector
    for (int i : my_vec2)
    { // this prints it
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // std::vector of strings
    std::vector<std::string> my_vecS = {"a", "b", "c"};
    for (const std::string &i : my_vecS)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}