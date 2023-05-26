#include <cstdio>

int main()
{
    // this creates an
    // empty file
    static const char *file_n1 = "file1";
    FILE *writer = fopen(file_n1, "w");
    fclose(writer);
    puts("Done writing.");

    // this renames
    // the file
    static const char *file_n2 = "file2";
    rename(file_n1, file_n2);

    // this is to remove
    // the file from the
    // file system
    remove(file_n2);
}