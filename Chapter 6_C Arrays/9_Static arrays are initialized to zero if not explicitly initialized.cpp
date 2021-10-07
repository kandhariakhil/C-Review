#include<stdio.h>

void staticArrayInit(void); //Function prototype
void automaticArrayInit(void); //Function prototype

int main(void){
    
    printf("\nFirst call to each function\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\nSecond call to each function\n");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}

void staticArrayInit(void){
    static int array1[3];

    int i;

    printf("\nValues on entering staticArrayInit:\n");

    for(i=0;i<3;i++){
        printf("array1[%d] = %d\t",i,array1[i]);
    }

    printf("\nValues on exiting staticArrayInit:\n");

    for(i=0;i<=2;i++){
        printf("array1[%d] = %d\t",i,array1[i] += 5);
    }
}

void automaticArrayInit(void){
    int array2[3] = {1,2,3};

    int i;

    printf("\nValues on entering automaticArrayInit:\n");

    for(i=0;i<3;i++){
        printf("array2[%d] = %d\t",i,array2[i]);
    }

    printf("\nValues on exiting automaticArrayInit:\n");

    for(i=0;i<=2;i++){
        printf("array1[%d] = %d\t",i,array2[i] += 5);
    }
}