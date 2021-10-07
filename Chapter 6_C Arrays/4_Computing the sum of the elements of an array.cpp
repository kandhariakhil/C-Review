#include<stdio.h>

#define SIZE 12

int main(void){

    int i = 0, sum = 0;
    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(i=0;i<SIZE;i++){
        sum += a[i];
    }

    printf("Total sum of array: %d \n",sum);
    return 0;
    
}