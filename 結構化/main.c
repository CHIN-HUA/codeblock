#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct card{
    char *face;
    char *suit;
};

int main()
{
    struct card aCard;
    struct card *cardPtr;

    aCard.face = "Ace";
    aCard.suit = "Spades";

    cardPtr = &aCard;

    printf("%s%s%s\n", aCard.face, " of ", aCard.suit);
    printf("%s%s%s\n", cardPtr->face, " of ", cardPtr->suit);
    printf("%s%s%s", (*cardPtr).face, " of ", (*cardPtr).suit);


}
