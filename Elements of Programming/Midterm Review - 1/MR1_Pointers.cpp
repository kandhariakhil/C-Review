#include<stdio.h>
#include<stdlib.h>
#include<iostream>

// pa and pb are pointers
// *pa and *pb are the values in the pointers passed in
void swap(int *pa, int *pb){
    int temp;
    temp = *pb;
    *pb = *pa;
    *pa = temp;
}

void dispVal(int a){
    std::cout<<"Value at address is: "<<a<<std::endl;
}

void swapRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10, b = 25;
    std::cout<<"a is: "<<a<<" b is: "<<b<<std::endl;
    swap(&a,&b); // Parse the address and the function extracts the value associated with the address
    std::cout<<"a is: "<<a<<" b is: "<<b<<std::endl;

    int *ptr;
    ptr = &a;
    dispVal(*ptr);

    swapRef(a,b);
    std::cout<<"a is: "<<a<<" b is: "<<b<<std::endl;

    dispVal(*ptr);
}