#include <iostream>
#include <fstream>

int main()
{
    // these define a few
    // things to write in
    // the file
    static int lineno = 0; // this is a counter
    static const char *filename = "test.txt"; // this is the name of the file
    static const char *textstring = "This is the test file"; // this is content for the file


    // this shows how to
    // write a file using
    // ofstream
    std::ofstream ofile(filename); // this opens the file as writer

    // write data in the file
    // using operator <<
    ofile << ++lineno << " " << textstring << std::endl;
    ofile << ++lineno << " " << textstring << std::endl;
    ofile << ++lineno << " " << textstring << std::endl;

    // this closes the file
    ofile.close();


    // this shows how to
    // read from a file
    // using ifstream
    static char buf[128]; // first we have to define a buffer
    std::ifstream infile(filename); // then we open the file as reader
    
    // then we iterate
    // in a while loop
    // over the file contents
    while (infile.good()) 
    {
        infile.getline(buf, sizeof(buf)); // get each line in the buffer
        std::cout << buf << std::endl; // and print the line
    }

    // this closes the file
    infile.close();


    // this deletes
    // the file from
    // the filesystem
    remove(filename);

    return 0;
}
