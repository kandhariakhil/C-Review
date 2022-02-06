#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Create structure
struct card{
    const char *face;
    const char *suit;
};

typedef struct card Card; //New type name for struct  card

//Function prototypes
void fillDeck(Card * const wDeck, const char *wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void){
    Card deck[52]; //Define array of Cards

    //Initialize array of pointers
    const char *face[] = {"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    const char *suit[] = {"Hearts","Diamonds","Clubs","Spades"};

    srand(time(NULL)); //Randomize

    fillDeck(deck, face, suit);
    shuffle(deck);
    deal(deck);
    return 0;
}

void fillDeck(Card * const wDeck, const char *wFace[], const char * wSuit[]){
    int i;

    for(i=0;i<52;i++){
        wDeck[i].face = wFace[i%13];
        wDeck[i].suit = wSuit[i/13];
    }
}

void shuffle(Card * const wDeck){
    //i is a counter, j holds random value between 0 and 51
    int i,j;

    Card temp; //temperory structure for swapping cards

    for(i=0;i<=51;i++){
        j = rand()%52;
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j]=temp;
    }
}

void deal(const Card * const wDeck){
    for(int i = 0;i<52;i++){
        printf("%5s of %-8s%s",wDeck[i].face,wDeck[i].suit,(i+1)%4?"\t":"\n");
    }
}