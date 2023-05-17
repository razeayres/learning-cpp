#include <cstdio>

int main() {
    bool t = true;
    bool f = false;

    //f = 7; // this is the same as f = true, because >0 is true

    printf("t i %d\n", t);
    printf("f i %d\n", f);

    // && and operator
    // || or operator
    // ! not-true operator
    if (!t) // (t && f)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }

    return 0;
}