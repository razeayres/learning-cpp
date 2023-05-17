#include <cstdio>

int main () {
    // size_t is actually a type
    // more link a const integer.
    // sizeof can be called as function
    // in any sitaution, but can also
    // be called as a statement, ie.,
    // 'sizeof a', when the target is a
    // variable
    size_t sz = sizeof(int);

    return 0;
}