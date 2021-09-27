#include <stdio.h>

int main(void){

    int num1, num2;
    printf("Enter first integer \n");
    scanf("%d",&num1);
    printf("Enter second integer \n");
    scanf("%d",&num2);

    /*
    Can use scanf to take two integeres simultaneously
    scanf("%d,%d",&num1,&num2)
    */

    //Check if statements for 6 conditions

    if(num1==num2){
        printf("%d is equal to %d \n",num1,num2);
    }

    if(num1!=num2){
        printf("%d is not equal to %d \n",num1,num2);
    }

    if(num1>num2){
        printf("%d is greater than %d \n",num1,num2);
    }

    if(num1<num2){
        printf("%d is less than %d \n",num1,num2);
    }

    if(num1>=num2){
        printf("%d is greater than or equal to %d \n",num1,num2);
    }

    if(num1<=num2){
        printf("%d is less than or equal to %d \n",num1,num2);
    }

    return 0;
}