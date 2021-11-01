#include<stdio.h>

int main(void){
    int b[] = {10,20,30,40};
    int *bPtr = b; //Set bPtr to point to array b
    int i;
    int offset;

    //Output array b using array subscript notation
    printf("Array b printed with: \nArray subscript notation\n");

    for(i=0;i<4;i++){
        printf("b[%d] = %d",i,b[i]);
    }

    //Output array b using array name and pointer/offset notation
    printf("\nPointer/offset notation where the pointer is the array name\n");

    for(offset=0;offset<4;offset++){
        printf("*(b+%d) = %d\n",offset,*(b+offset));
    }

    //Output array b using bPtr and array subscript notation
    printf("\nPointer subscript notation\n");

    for(i=0;i<4;i++){
        printf("bPtr[%d] = %d\n",i,bPtr[i]);
    }

    //Output array b using bPtr and pointer/offset notation
    printf("\nPointer/offset notation where the pointer is the array name\n");

    for(offset=0;offset<4;offset++){
        printf("*(bPtr+%d) = %d\n",offset,*(bPtr+offset));
    }

    return 0;
}