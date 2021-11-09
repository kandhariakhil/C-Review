#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int wDeck[][13]);
void deal(const int wdeck[][13],const char *wFace[],const char *wSuit[]);

int main(void){
    //Initialize suit array
    const char *suit[4] = {"Hearts","Diamonds","Clubs","Spades"};
    
    //Initialize face array
    const char *face[13] = {"Ace","Deuce","Three","Four",
                            "Five","Six","Seven","Eight",
                            "Nine","Ten","Jack","Queen","King"};

    //Initialize deck array
    int deck[4][13] = {0};

    srand(time(0)); //Seed random number generator

    shuffle(deck);
    deal(deck,face,suit);
    return 0;
}

void shuffle(int wDeck[][13]){
    
    int row,column,card;

    //For each of the 52 cards, choose slot of deck randomly
    for(card = 1; card<=52;card++){
        do
        {
            row = rand()%4;
            column = rand()%13;
        } while (wDeck[row][column]!=0);

       wDeck[row][column] = card; 
    }
}

void deal(const int wdeck[][13],const char *wFace[],const char *wSuit[]){
    
    int card,row,column;

    //Deal each of the 52 cards
    for (card = 1; card <= 52; card++)
    {
        //Loop through rows of wDeck
        for(row = 0;row <= 3; row++){
            //Loop through columnds of wDeck
            for(column = 0; column <= 12; column++){
                if(wdeck[row][column]==card){
                    printf("%5s of %-8s%c",wFace[column],wSuit[row],
                    card%2==0?'\n':'\t');
                }
            }
        }
    }
}