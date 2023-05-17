#include <cstdio>

// enums are more like
// constants
enum card_suit : int
{
    club,    // 0
    diamond, // 1
    heart,   // 2
    spade    // 3
};

enum card_rank : int
{
    ace = 1,   // 1
    deuce = 2, // 2
    jack = 11, // 11
    queen,     // 12
    king       // 13
};

// these define some
// const strings
const char *spadesString = "Spades";
const char *heartsString = "Hearts";
const char *diamondsString = "Diamonds";
const char *clubsString = "Clubs";

struct card
{
    int rank;
    int suit;
};

// this is a array
// for 3 elements type
// card
card deck[3] = {{king, club},
                {deuce, spade},
                {13, heart}};

// this declares and
// defines a function
// that prints a card
void print_card(card c)
{
    printf("Rank is %d\n", c.rank);
    printf("Suit is %d\n", c.suit);

    switch (c.suit)
    {
    case spade:
        puts(spadesString);
        break;
    case heart:
        puts(heartsString);
        break;
    case diamond:
        puts(diamondsString);
        break;
    case club:
        puts(clubsString);
        break;
    }
}

// this the main func
// called by the OS
int main()
{
    print_card(deck[0]);

    for (card c : deck)
    {
        print_card(c);
    };

    return 0;
}