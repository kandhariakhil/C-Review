//Let's say we want to define an array, but we don't know how big to make it until our program runs
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

// int main()
// {
//     int *arr;
//     int size;

//     std::cout<<"Enter array size (>3)";
//     std::cin>>size;

//     arr = new int[size];
//     arr[0] = 10;
//     arr[2] = 75;
//     delete [] arr;
// }

struct Point
{
    int x;
    int y;
};

int main(){
    Point *ptr;

    ptr = new Point;

    ptr->x = 10;
    (*ptr).y = 20;

    std::cout<<ptr->x<<std::endl;

    delete ptr;
}


// int main(){
//     //Define a pointer
//     int *ptr;

//     //Allocate dynamic variable
//     ptr = new int;

//     //Use the dynamic variable
//     *ptr = 42;
//     std::cout<<*ptr<<std::endl;

//     delete ptr;

// }
