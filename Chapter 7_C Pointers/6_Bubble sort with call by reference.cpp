#include<stdio.h>

#define SIZE 10
//Function prototype: 2 ways taht are interchangeable
//void bubbleSort(int * const array,const int size); 
void bubbleSort(int array[],const int size);

int main(void){
    //Initialize array

    int a[SIZE] = {1,4,2,12,3,66,3,2,54,8};

    int i;

    printf("Data items in original order:\n");
    
    for(i=0;i<SIZE;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    bubbleSort(a,SIZE);

    printf("Data items in ascending order:\n");
    
    for(i=0;i<SIZE;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}

//void bubbleSort(int * const array,const int size) ->can be assigned this way or 
void bubbleSort(int array[],const int size){
    void swap(int *element1Ptr, int *element2Ptr); //Function prototype;
    int pass, j;

    for(pass = 0;pass<size-1;pass++){
        for(j=0;j<size-1;j++){
            if (array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

//Swap values at memory locations to which element1Ptr and element2Ptr point
void swap(int *element1Ptr, int *element2Ptr){
    int hold;

    hold = *element1Ptr; //hold = value of array[j] (*&array[j])
    *element1Ptr = *element2Ptr; 
    *element2Ptr = hold;
}
