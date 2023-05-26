#include <cstdio>

int main () {
    int i = 5;
    long int li = 1234567890L;
    const char *s = "This is a C-string.";

    /**
     * %d   integer
     * %d   float
     * %s   C-string
     * $c   char
     * %p   pointer
     * %%   % char
     * #zd  sizeof
     */
    printf("i is %04d, li is %ld, s is %s\n", i, li, s);

    return 0;
}