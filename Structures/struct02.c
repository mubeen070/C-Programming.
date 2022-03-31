#include <stdio.h>

struct card
{
    char *face;
    char *suit;
} aCard;

int main(void)
{

    aCard.face = "Ace";
    aCard.suit = "Spades";

    struct card *cardPtr = &aCard;
    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
           cardPtr->face, " of ", cardPtr->suit,
           (*cardPtr).face, " of ", (*cardPtr).suit);
}