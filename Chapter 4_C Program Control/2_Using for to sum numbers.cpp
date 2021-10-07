#include<stdio.h>

int main(void){
    int counter = 2;
    int sum = 0;

    for(counter=2;counter<=100;counter+=2){
        sum +=counter;
    }

    printf("Sum of even integers between 2 and 100 is: %d",sum);
    return 0;

    //Note: The body of the for statment could be merged into the rightmost portion of the for header:
    //for(counter=2;counter<=100;sum+=counter,counter+=2)
}