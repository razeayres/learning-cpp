#include <cstdio>
#include <cstdint>

// union are like very
// simple class-like struct
// to organize data
union ipv4
{
    uint32_t i32; // this is a 32-bit int
    struct
    {
        // these are all 8-bit
        // data
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } address; // <- we can define the name of the struct here
};

int main()
{
    union ipv4 addr;
    addr.address = {192, 168, 73, 42};

    printf("IP is %d.%d.%d.%d is %08x\n",
           addr.address.a, addr.address.b, addr.address.c, addr.address.d, addr.i32);
    return 0;
}