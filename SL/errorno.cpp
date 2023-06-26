#include <cstdio>
#include <cerrno>
#include <string>

int main () {
    printf("Erasinng file foo.bar\n");

    // this ties to delete
    // the file foo.bar 
    remove("foo.bar");

    // this captures the error in
    // errno
    printf("errno is: %d\n", errno);
    perror("Cannot erase file");

    // this shows how do display
    // the description of the error
    const char *errstr = strerror(errno);
    printf("error (%d): %s\n", errno, errstr);

    return 0;
}