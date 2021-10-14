#include<stdio.h>

void cubeByreference(int *nPtr);
//void cubeByreference(int *); //No value is returned therefore void

int main(void){
    int num = 5;

    printf("Original value of integer is: %d",num);

    cubeByreference(&num);

    printf("\nNew value of integer is: %d",num);

    return 0;
}

void cubeByreference(int *nPtr){
    *nPtr = (*nPtr)*(*nPtr)*(*nPtr); //No return but the number is changed once cubed in main
}