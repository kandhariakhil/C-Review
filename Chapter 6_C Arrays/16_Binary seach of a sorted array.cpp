#include<stdio.h>

#define SIZE 15

//Function prototypes:
int binarySearch(const int b[], int searchKey, int low, int high);
void printHeader(void);
void printRow(const int b[], int low, int mid, int high);

int main(void){
    int a[SIZE]; //Create array
    int key; //Value to locate in array
    int index; //Value to hold index of key

    //Create data: In this case data is sorted, if not sort data first and retain indexing - more techniques later
    for(int i = 0;i<SIZE;i++){
        a[i]=2*i;
    }

    printf("Enter a number between 0 and 28: \n");
    scanf("%d",&key);

    printHeader();

    index = binarySearch(a,key,0,SIZE-1);

    if(index != -1){
        printf("Key %d found at index %d\n",key,index);
    }
    else{
        printf("Key %d not found in given array\n",key);
    }

    return 0;
}

int binarySearch(const int b[], int searchKey, int low, int high){
    int middle; //Variable to hold middle element of array

    //Loop until low subscript is greater than high subscript
    while(low<=high){
        middle = (low+high)/2;

        printRow(b,low,middle,high);

        if(searchKey==b[middle]){
            return middle;
        }
        else if (searchKey<b[middle])
        {
            high = middle-1;
        }
        else{
            low = middle+1;
        }
    }

    return -1;
}

void printHeader(void){
    int i;
    printf("\nSubscripts:\n");
    for(i=0;i<SIZE;i++){
        printf("%3d",i);
    }
    printf("\n");

    for(i=0;i<=4*SIZE;i++){
        printf("-");
    }

    printf("\n");
}

void printRow(const int b[], int low, int mid, int high){
    for(int i=0;i<SIZE;i++){
        if(i<low||i>high){
            printf("   ");
        }
        else if(i==mid){
            printf("%3d*",b[i]);
        }
        else{
            printf("%3d",b[i]);
        }
    }
    printf("\n");
}