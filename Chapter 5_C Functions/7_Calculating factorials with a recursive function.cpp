#include<stdlib.h>
#include<stdio.h>

long factorial(long number); //Function prototype

int main(void){
    int i;

    //Loop 11 timesduring each loop calculate factorial of num
    for(i=0;i<=10;i++){
        printf("%d! = %d\n",i,factorial(i));
    }

    return 0;
}

long factorial(long number){
    if (number<=1){
        return 1;
    }
    else{
        return (number*factorial(number-1));
    }
}