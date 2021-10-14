#include<stdio.h>

int cubeByValue(int n);

int main(void){
    int number = 5;

    printf("Original value of integer: %d",number);

    number = cubeByValue(number);

    printf("\nNew value of integer: %d",number);

    return 0;
}

int cubeByValue(int n){
    return n*n*n;
}