#include<stdio.h>

int maximum(int x, int y, int z); //If this line is not present (function prototype) the entire function needs to be placed above the main function

int main(void){

    int x,y,z;

    printf("Enter first integer: ");
    scanf("%d",&x);
    printf("Enter second integer: ");
    scanf("%d",&y);
    printf("Enter third integer: ");
    scanf("%d",&z);

    printf("Maximum number is %d\n",maximum(x,y,z));

    return 0;
}

int maximum(int x, int y, int z){
    int max;

    max = x;

    if (y>max)
         max = y;
    if (z>max)
        max = z;

    return max;
}