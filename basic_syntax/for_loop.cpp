#include <cstdio>

int main()
{
    // this is a 
    // C-style
    // for loop
    for (int i = 0; i < 5; i++) // init; condition to stop; modifier
    {
        printf("This is element %d\n", i);
    }

    // this is how to iterate
    // through a string. You have
    // to use pointers to do that
    char s[] = "string";
    for (char *p = s; *p; ++p) {
        printf("char is %c\n", *p);
    }

    // this is a 
    // C++-style
    // for loop
    // ie., range-based
    // for loop
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr) {
        printf("i is %d\n", i);
    }

    // this is how to iterate
    // through a string with
    // this new loop
    char s[] = "string";
    for (char c : s) {
        if (c == 0) break;
        printf("c is %c\n", c);
    }

    return 0;
}