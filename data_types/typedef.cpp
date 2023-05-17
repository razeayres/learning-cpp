#include <cstdio>

// these basically create
// an alias for a primitive
// type. You can create
// your own type names, like
// int type my_int
typedef unsigned char points_t; // _t is traditional for typedef types
typedef unsigned char rank_t;

struct score
{
    points_t p;
    rank_t r;
};

int main()
{
    score s = {5, 1};
    printf("score s had %d points and a rank of %d\n",
           s.p, s.r);

    return 0;
}