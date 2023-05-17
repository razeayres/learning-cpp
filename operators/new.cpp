#include <cstdio>
#include <new>

// this to define
// how many spaces
// the array will have
const int spaces = 10;

int main()
{
    // 1. first we need to
    // declare a pointer
    // for the array
    int *arr;

    // 2. then this defines the array
    // of size 'spaces' using the
    // operator new, which will allow
    // this array to be deleted later
    arr = new int[spaces];

    // 3. this init or populates the
    // array
    for (int i = 0; i < spaces; i++)
    {
        arr[i] = i;
    }

    // 4. this deletes the array
    // and free allocated space
    // from memory
    delete[] arr;

    return 0;
}