#include <cstdio>
#include <cstdint>

// this is a function copied
// from the course to print
// binary values as string
const char *u8_to_bstr(const uint8_t &u8)
{
    static char s[9];
    s[8] = 0;
    char *sp = s;
    for (uint8_t xbit = 0b10000000; xbit > 0; xbit >>= 1)
    {
        *(sp++) = ((u8 & xbit) == xbit) ? '1' : '0';
    }

    return s;
}

int main()
{
    uint8_t a = 5;  // 00000101
    uint8_t b = 10; // 00001010

    // uint8_t result = ~a;     // 11111010 -> it flips zeros and ones
    // uint8_t result = a | b;  // 00001111 -> it gets all possible ones
    // uint8_t result = a & b;  // 00000000 -> it gets all possible zeros
    // uint8_t result = a << 1; // 00001010 -> it shifts everything to the left and fills with zeros
    // uint8_t result = a >> 1; // 00000010 -> it shifts everything to the right and fills with zeros
    uint8_t result = a ^ b; // 00001111 -> we get the difference (1 = different, 0 = equal)

    printf("a is %s\n", u8_to_bstr(a));
    printf("b is %s\n", u8_to_bstr(b));
    printf("result is %s\n", u8_to_bstr(result));

    return 0;
}