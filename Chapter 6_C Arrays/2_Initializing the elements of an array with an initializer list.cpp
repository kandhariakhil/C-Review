#include<stdio.h>

int main(void){
    int n[10] = {32,12,44,-5,1,53,103,-12,666,39};
    int i;

    printf("Element\t Value\n");

    for(i=0;i<10;i++){
        printf("%d\t %d\n",i,n[i]);
    }

    return 0;
    
    //int n[10] = {0} initializes the first element to 0 and the rest will also be initialized to 0, for example if int n[10] = {1,2}, the remaining 8 elements will be 0.
    //int n[] = {1,2,3,4,5} will initialize an array of 5 elements
}