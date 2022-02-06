#include<stdio.h>

void displayBits(unsigned value); //Function prototype

int main(void){
    unsigned x;

    printf("Enter an unsigned integer: \n");

    scanf("%u",&x);

    displayBits(x);

    return 0;
}

void displayBits(unsigned value){
    unsigned c;

    //Define displayMask and left shift 31 bits since unsigned integers are 4 bytes (32 bits)

    unsigned displayMask = 1<<31;

    printf("%10u = ",value);

    for (c = 1;c<=32;c++){
        putchar(value & displayMask? '1':'0');
        value<<=1; //Shift left by 1

        if (c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}