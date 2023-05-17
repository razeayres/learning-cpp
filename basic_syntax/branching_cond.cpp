#include <cstdio>

int main() {
    // these have to be const
    // to work with switch
    // statement
    const int ONE = 1;
    const int TWO = 2;
    const int THREE = 3;

    // this declares the variable
    // that is going to be used in the
    // switch statement
    int c = 2;

    // this is a statement imported
    // from C language. It go through
    // multiple tests and return the most
    // appropriate
    switch(c) {
        case ONE: // <- this only work if it is a const
            puts("Answer: 1"); // <- "s" is string, 's' is char
            break;
        case TWO:
            puts("Answer: 2");
            break;
        case THREE:
            puts("Answer: 3");
            break;
        default:
            puts("Answer: 0"); // <- this is in case nothing matches
            break;
    }

    return 0;
}