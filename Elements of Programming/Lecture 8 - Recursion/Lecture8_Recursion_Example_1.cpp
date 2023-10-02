#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int factorial(int n){
    if (n==0){
        return 1;
    }

    int fact_of_n = n*factorial(n-1);
    return fact_of_n;
}

int main(){
    int fact5 = factorial(4);
    std::cout<<fact5<<std::endl;
}