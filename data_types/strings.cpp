#include <cstdio>

int main()
{
    // char cstring[] = "String";
    // const char *cstring = "String";
    const char *cstring = "String" // this is how strings are usually concatenated
                          " with another string";

    // these display the string
    // and loops through it
    puts(cstring);
    for (int i = 0; cstring[i]; i++)
    {
        printf("%d: %c\n", i, cstring[i]);
    }

    return 0;
}