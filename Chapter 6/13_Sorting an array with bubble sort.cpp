#include<stdio.h>

#define SIZE 10

int main(void){
    int a[SIZE] = {2,6,4,8,10,12,89,68,2,37}; //Unsorted array
    int pass; //passes counter
    int i; //comparison counter
    int hold; //temporary location used to swap array elements

    printf("Original items in original order\n");
    for(i=0;i<SIZE;i++){
        printf("%4d",a[i]);
    }
    printf("\n");

    //Bubble sort algorithm
    //Loop to control number of passes
    for(pass=1;pass<SIZE;pass++){
        //Loop to control comparison
        for(i=0;i<SIZE-1;i++){
            if(a[i]>a[i+1]){
                hold = a[i];
                a[i]=a[i+1];
                a[i+1] = hold;
            }
        }
    }

    printf("Array items in ascending order\n");
    
    for(i=0;i<SIZE;i++){
        printf("%4d",a[i]);
    }

    return 0;
}