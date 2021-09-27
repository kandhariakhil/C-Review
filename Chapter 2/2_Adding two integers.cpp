//A simple program to add two integers

#include <stdio.h>

int main(void){
    int number1;
    int number2;
    int sum;
    printf("Enter first integer: ");
    scanf("%d", &number1);

    printf("Enter second integer: ");
    scanf("%d", &number2);

    sum = number1+number2;

    printf("Sum of %d and %d is %d",number1,number2,sum);

    return 0;
}