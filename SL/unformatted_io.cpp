#include <cstdio>

int main () {
    // this defines the
    // the buffer size or
    // array that will hold
    // values
    const int bufsize = 256;
    static char buf[bufsize];

    // this prints in the
    // console
    fputs("prompt: ", stdout);

    // this prompts for
    // inputs
    fgets(buf, bufsize, stdin);

    // these print in the
    // console the buffer
    puts("output:");
    fputs(buf, stdout);

    // because all of these
    // prints are async, we have
    // this to wait before continuing
    fflush(stdout);

    return 0;
}