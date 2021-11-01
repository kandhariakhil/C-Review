#include<stdio.h>

//size_t is a type defined by the C standard as te integral type of the value returned by operator sizeof
size_t getSize(float *ptr); //Function prototype

int main(void){
    float array[20];
    printf("The number of bytes in the array is %d"
            "\nThe number of bytes returned by getsize is %d\n",
            sizeof(array),getSize(array));

    return 0;
}

size_t getSize(float *ptr){
    return sizeof(ptr);
}