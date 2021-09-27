#include<stdio.h>

#define SIZE 10 //Maximum size of array

int main(void){

    int i = 0;
    int arr[SIZE];

    for (i=0;i<SIZE;i++){
        arr[i] = 2+i*2;
    }
    
    //Separate loop for printing
    printf("Element\tValue\n");
    for (int j=0;j<SIZE;j++){
        printf("%d\t%d\n",j,arr[j]);
    }

    return 0;
}