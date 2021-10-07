#include<stdio.h>

#define SIZE 100

int linearSearch(int arr[],int element, int size);

int main(void){
    int i = 0;
    int a[SIZE]; //Array to be searched
    int element,index;
    //Create data set

    for(i=0;i<SIZE;i++){
        a[i] = i*2;
    }

    printf("Enter element to be searched: ");
    scanf("%d",&element);

    index = linearSearch(a,element,SIZE);

    if(index != -1){
        printf("\nElement %d found at %d index\n",element,index);
    }
    else{
        printf("Element %d not found in given array\n",element);
    }

    return 0;

}

int linearSearch(int arr[],int element, int size){

    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }

    return -1;
}