#include<stdio.h>

#define SIZE 40
#define FREQUENCY_SIZE 11 //This will allow a direct increment of the index based on response

int main(void){
    int i = 0;
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[SIZE] = {1,1,1,2,3,4,3,9,10,10,
                    10,9,4,5,6,7,8,9,2,2,
                    10,4,5,6,5,6,5,6,4,3,
                    9,9,9,9,5,5,5,5,1,2};

    for(i=0;i<SIZE;i++){
        ++frequency[responses[i]];
    }
    printf("Rating\t\tFrequency\n");
    for(i=1;i<FREQUENCY_SIZE;i++){
        printf("%d\t\t%d\n",i,frequency[i]);
    }

    return 0;
}