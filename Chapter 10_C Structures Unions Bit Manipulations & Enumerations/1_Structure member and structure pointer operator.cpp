#include<stdio.h>

//Structure definition
struct card
{
    char *face; //define pointer face
    char *suit; //define pointer suit
};

int main(void){
    struct card acard; //Define one struct card variable
    struct card *cardPtr; //Define a pointer to a struct  card

    acard.face = "Ace";
    acard.suit = "Hearts";

    cardPtr = &acard; //Assign addres of acard to cardPtr

    printf("%s%s%s\n%s%s%s\n%s%s%s\n",acard.face," of ",acard.suit,
            (*cardPtr).face, " of ",(*cardPtr).suit,
            cardPtr->face," of ", cardPtr->suit);

    return 0;
}
