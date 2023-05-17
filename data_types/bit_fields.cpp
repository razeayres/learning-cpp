#include <cstdio>

struct data // it takes 64 bits
{
    bool likesMusic : 1; // this is the number of bits that will be used (1 bit)
    bool hasInternet : 1;
    unsigned int numberOfDisks : 4; // 4 bits
};

int main()
{
    data data_struct;
    data_struct = {true,
                   false,
                   3};

    printf("sizeof data_struct: %zd bits\n", sizeof(data_struct) * 8);

    return 0;
}