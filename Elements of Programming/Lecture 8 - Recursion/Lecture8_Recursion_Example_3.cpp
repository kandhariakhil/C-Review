#include<stdio.h>
#include<stdlib.h>
#include<iostream>

void printArr(int arr[], int n){
    // Since we want to print last element first, we use the last case
    if (n == 0){
        return;
    }
    else{
        printArr(arr+1,n-1);
        std::cout<<arr[0]<<std::endl;
    }
}

int main(){
    const int size = 6;
    int arr[size] = {1,2,3,4,5,6};
    printArr(arr,size);
}