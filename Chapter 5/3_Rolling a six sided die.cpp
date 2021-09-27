#include<stdio.h>
#include<math.h>

int main (void){
    int maxRolls = 20;
    int randInt;
    for (int i=0;i<maxRolls;i++){
        randInt = rand();

        int dieRoll = randInt%6+1;

        printf("Roll for iteration %d : %d\n",i+1,dieRoll);
    }

    return 0;
}