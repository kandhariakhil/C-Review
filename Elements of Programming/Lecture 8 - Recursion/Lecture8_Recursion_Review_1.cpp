#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int arraySum(int arr[], int size){
    if (size == 0){
        return 0;
    }

    if (size == 1){
        return arr[0];
    }

    int frontSum = arraySum(arr,size-1);
    int totalSum = arr[size-1]+frontSum;
    return totalSum;
}

int main(){
    const int size = 6;
    int arr[size] = {1,2,3,4,5,6};
    std::cout<<"Sum is: "<<arraySum(arr,size)<<std::endl;
}

