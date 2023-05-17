#include <cstdio>

// a primitve string is a simple
// array of characters terminated
// with a 0 (zero)

int main() {
    // this is the declaration and
    // definition of a string
    char s[] = "String";
    printf("s is %s\n", s);

    // this returns the same thing as
    // code above, and shows that a
    // string is just an array terminated with
    // a zero
    char ss[] = {'S', 't', 'r', 'i', 'n', 'g', 0};
    printf("s is %s\n", ss);

    return 0;
}