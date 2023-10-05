#include<stdio.h>
#include<stdlib.h>
#include<iostream>


using namespace std;

int numItemsBetween(int top, int bot){
    return bot-top+1;
}

int binarySearch(int arr[],int top, int bot, int searchVal){
    if (numItemsBetween(top,bot) == 0){
        return -1; //value not found
    }
    else{
        int mid = (top+bot)/2;
        if(searchVal == arr[mid]){
            return mid;
        }
        else if (searchVal<arr[mid])
        {
            return binarySearch(arr,top,mid-1,searchVal);
        }
        else if (searchVal>arr[mid]){
            return binarySearch(arr,mid+1,bot,searchVal);
        } 
    }
    return-1;
}

int simpleBinarySearch(int arr[],int size,int searchVal){
    return binarySearch(arr,0,size,searchVal);
}

int main(){
    const int size = 8;
    int arr[size] = {10,20,30,40,50,60,70,80};
    int location = simpleBinarySearch(arr,size,50);
    cout<<location<<endl;
}