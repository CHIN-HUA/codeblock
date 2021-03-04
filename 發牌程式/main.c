#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4 // 4種花色
#define FACES 13 // 13種數字
#define CARDS 52 //總共52張

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);

int main()
{
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    unsigned int deck[SUITS][FACES] = {0};

    srand(time(NULL));

    shuffle(deck);
    deal(deck, face, suit);

    return 0;
}

void shuffle(unsigned int wDeck[][FACES])
{
    size_t row;
    size_t column;
    size_t card;

    for(card = 1; card <= CARDS; ++card)
    {
        do{
            row = rand() % SUITS; //亂數產生
            column = rand() % FACES;
        }while(wDeck[row][column] != 0); //有東西

        wDeck[row][column] = card;
    }
}

void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
    size_t card;
    size_t row;
    size_t column;

    for(card = 1; card <= CARDS; ++card)
    {
        for(row = 0; row < SUITS; ++row)
        {
            for(column = 0; column < FACES; ++column)
            {
                if(wDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); //兩個換一行
                }
            }
        }
    }
}
