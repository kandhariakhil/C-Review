#include<stdio.h>
#include<math.h>

int main (void){
    int maxRolls = 6000;
    int randInt, dieRoll, frq1 = 0, frq2 = 0, frq3 = 0, frq4 = 0, frq5 = 0, frq6 = 0;

    for (int i=0;i<maxRolls;i++){
        randInt = rand();

        dieRoll = randInt%6+1;

        switch (dieRoll)
        {
            case 1:
                frq1++;
                break;
            case 2:
                frq2++;
                break;
            case 3:
                frq3++;
                break;
            case 4:
                frq4++;
                break;
            case 5:
                frq5++;
                break;
            case 6:
                frq6++;
                break;
        }
    }

    printf("Instances of 1: %d\n",frq1);
    printf("Instances of 2: %d\n",frq2);
    printf("Instances of 3: %d\n",frq3);
    printf("Instances of 4: %d\n",frq4);
    printf("Instances of 5: %d\n",frq5);
    printf("Instances of 6: %d\n",frq6);

    return 0;
}