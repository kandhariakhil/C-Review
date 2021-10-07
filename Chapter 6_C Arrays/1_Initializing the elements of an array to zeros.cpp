#include<stdio.h>

int main(void){
    int n[10]; //Initialize 10 element array

    for (int i = 0; i<10; i++){
        n[i] = 0;
    }

    printf("Element\t Value\n");
    for (int i = 0; i<10; i++){
        printf("%d\t %d\n",i,n[i]);
    }
    return 0;
}