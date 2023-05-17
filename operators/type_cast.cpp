#include <cstdio>

int main()
{
    int i = 5;
    long long int lli;

    // this is ok, because
    // less data is stored
    // in a much larger space
    lli = i;

    // but if we go for a
    // smaller space, we might
    // lose data. For that the
    // the type cast must be used
    // to ensure perfect conversion
    i = (int)lli;

    return 0;
}