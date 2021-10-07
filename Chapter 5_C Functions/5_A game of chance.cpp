#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status {CONTINUE, WON, LOST}; //Enumeration constants represent game status

int rollDice(void); //Function prototype

int main (void){
    int sum; //Summation of rolled die
    int myPoint; //players point

    enum Status gameStatus; //Contains Continue, won or lost game status

    srand(time(NULL)); //To add random seed through the stdlib library

    sum = rollDice();
    //Game status based on die roll

    switch(sum){
        case 7:
        case 11:
            gameStatus = WON;
            break;
        
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Player point is: %d\n",myPoint);
            break;
    }

    while(gameStatus==CONTINUE){
        printf("Player rolls again\n");
        sum = rollDice();
        if (sum == myPoint) {
            gameStatus = WON;   
        }
        else if (sum == 7)
        {
            gameStatus = LOST;  
        }
    }

    if (gameStatus==WON){
        printf("Player won");
    }
    else if (gameStatus == LOST){
        printf("Player lost");
    }
    return 0;
}

int rollDice(void){
    int die1;
    int die2;
    int workSum;

    die1 = 1+(rand()%6);
    die2 = 1+(rand()%6);

    workSum = die1+die2;

    printf("Player rolled a %d+%d = %d\n",die1, die2, workSum);

    return workSum;
}