#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int count(int arr[], int n, int val){
    if(n==0){
        return 0;
    }

    int total = count(arr+1,n-1,val);
    if (arr[0] == val){
        ++total;
    }
    return total;
}

int main(){
    const int size = 5;
    int arr[size] = {7,9,6,7,7};
    std::cout<<count(arr,size,7)<<std::endl;
}