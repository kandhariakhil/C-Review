#include<stdio.h>

int square(int y){
    return y*y;
}

int main(void){

    for(int i=1;i<=10;i++){
        printf("Square of %d is %d \n",i,square(i));
    }

    return 0;
}