//Demonstrates the difference between passing an entire array and passing an array element
//The elements of the array are modified when the entire array is passed, when an element is modified in a function, the same is not reflected in main as individual
//elements are passed by value

#include<stdio.h>
#define SIZE 5

void modifyArray(int b[],int size);
void modifyElement(int element);

int main(void){
    int arr[SIZE] = {1,2,3,4,5};
    
    printf("Original values of array = ");
    for (int i=0;i<SIZE;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n");

    modifyArray(arr,SIZE);

    printf("Modified values of array = ");
    for (int i=0;i<SIZE;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n");

    modifyElement(arr[3]);
    printf("Modified value of 4th element in main = %d\n",arr[3]);
    
    return 0;
}

void modifyArray(int b[],int size){
    for(int i = 0;i<size;i++){
        b[i] *= 2;
    }
}

void modifyElement(int element){
    printf("\nModified value of element in function = %d\n",element*2);
}