#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 7

int main(void){

    srand(time(NULL)); //Initialize random seed

    int i = 0, numRoll = 6000;
    int face[SIZE] = {0};
    int faceVal;

    for(i = 0;i < numRoll;i++){
        faceVal = rand()%6+1;
        ++face[faceVal];
    }

    printf("Value\t\tFrequency\n");

    for(i=0;i<6;i++){
        printf("%d\t\t%d\n",i+1,face[i+1]);
    }

    return 0;
}