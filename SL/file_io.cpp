#include <cstdio>

// these are the same
// as "const static"
constexpr int maxstring = 1024; // this is the reading buffer size

int main()
{
    const char *filename = "testfile.txt";
    const char *cstr = "This is a literal c-string.\n";


    // --- these are to
    // create/write
    // the file ---
    puts("Creating and writing the file...");
    FILE *writer = fopen(filename, "w"); // create the file and open in writer mode

    // this writes the cstr
    // five times in a loop
    for (int i = 0; i < 5; i++)
    {
        fputs(cstr, writer);
    }

    // this closes
    // the file
    fclose(writer);
    puts("Done.");


    // --- these are to
    // read the file --
    puts("Reading the file...");
    char buf[maxstring]; // this declares the buffer array
    FILE *reader = fopen(filename, "r"); // this opens the file in reader mode

    // this loops through
    // the entire contents
    // of the file
    while (fgets(buf, maxstring, reader)) // fgets put the line in the buffer
    {
        fputs(buf, stdout); // prints the buffer in the console
    }

    // this closes
    // the file
    fclose(reader);
    puts("Done.");


    //  --- this
    // deletes the
    // file ---
    remove(filename);

    return 0;
}
