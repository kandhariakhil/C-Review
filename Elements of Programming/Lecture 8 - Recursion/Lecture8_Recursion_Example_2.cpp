#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int arraySum(int arr[], int n){
    if (n==0){
        return 0;
    }

    if (n==1){
        return arr[0];
    }
    // Strategy 1 - Front to back
    /*
    int first = arraySum(arr, n-1);
    int total = first+arr[n-1];
    return total;
    */

    // Strategy 2 - Back to front
    /*
    int last = arraySum(arr+1,n-1);
    int total = last+arr[0];
    return total;
    */

    // Strategy 3 - Divide 
    int first = arraySum(arr,n/2);
    int last = arraySum(arr+n/2,n-n/2);
    int total = first+last;
    return total;
}

int main(){
    const int n = 2;
    int arr[n] = {10,20};
    int s;

    s= arraySum(arr,n);

    std::cout<<"Summation is "<<arraySum(arr,0)<<std::endl;
    std::cout<<"Summation is "<<arraySum(arr,1)<<std::endl;
    std::cout<<"Summation is "<<s<<std::endl;
}