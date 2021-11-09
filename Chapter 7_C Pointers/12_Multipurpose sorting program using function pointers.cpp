#include<stdio.h>

#define SIZE 10

//Function prototypes
void bubble(int work[],const int size,int(*compare)(int a,int b));
int ascending(int a,int b);
int descending(int a,int b);

int main(void){
    int order; //1 for ascending, 2 for descending
    int counter;

    //Initialize array
    int a[SIZE] = {2,4,6,8,10,12,89,68,45,37};

    printf("Enter 1 for ascending order,\n"
            "2 for descending order: ");
    
    scanf("%d",&order);

    printf("Data items in original order\n");

    for(counter=0;counter<SIZE;counter++){
        printf("%d\t",a[counter]);
    }

    if(order==1){
        bubble(a,SIZE,ascending);
        printf("\nData items in ascending order:\n");
    }

    if(order==2){
        bubble(a,SIZE,descending);
        printf("\nData items in descending order:\n");
    }

    //Print sorted array
    for(counter=0;counter<SIZE;counter++){
        printf("%d\t",a[counter]);
    }

    return 0;
}

void bubble(int work[],const int size,int(*compare)(int a,int b)){

    int pass;
    int count;

    void swap(int *element1Ptr,int *element2Ptr);

    for(pass = 1;pass<size;pass++){
        for(count=0;count<size-1;count++){
            if((*compare)(work[count],work[count+1])){
                swap(&work[count],&work[count+1]);
            }
        }
    }
}

void swap(int *element1Ptr,int *element2Ptr){
    int hold;

    hold = *element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr = hold;
}

int ascending(int a,int b){
    return b<a;
}

int descending(int a,int b){
    return b>a;
}