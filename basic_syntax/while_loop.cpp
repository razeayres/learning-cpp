#include <cstdio>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i = 0;

    // this is a while
    // loop
    while (i < 5)
    {
        // this is a one-line
        // conditional
        if (i == 4)
            break;

        // this is skips the
        // element 2
        if (i == 2)
        {
            ++i;
            continue;
        }

        printf("This is element %d from %d\n", i, arr[i]);
        ++i; // this is diferent from other languages i++
    }

    // this a do-while
    // loop
    do
    {
        ++i;
        printf("This would be element %d\n", i);
    } while (i < 15); // <- this requires;

    return 0;
}