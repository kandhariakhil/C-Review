#include<stdio.h>

#define SIZE 10

int main(void){
    int arr[SIZE] = {5,3,15,7,11,9,13,5,17,1};
    int i = 0, j = 0;
    printf("Element\t\tValue\t\tHistogram\n");
    for(i = 0;i<SIZE;i++){
        printf("%d\t\t%d\t\t",i,arr[i]);
        for(j=0;j<arr[i];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}