#include<stdio.h>

#define SIZE 99

void mean(const int a[]);
void median(int answer[]);
void mode(int freq[],const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);


int main(void){
    int frequency[10] = {0};

    int response[SIZE] = 
        {6,7,8,9,8,7,8,9,8,9,
        7,8,9,5,9,8,7,8,7,8,
        6,7,8,9,3,9,8,7,8,7,
        7,8,7,8,9,1,2,3,4,5,
        5,6,4,6,7,8,9,6,7,7,
        9,9,9,9,9,9,9,9,9,9,
        2,2,2,2,2,3,3,3,4,4,
        1,1,9,9,9,9,9,3,4,1,
        9,1,1,5,4,6,7,8,7,6,
        1,1,1,2,2,3,2,1,1};

        mean(response);
        median(response);
        mode(frequency,response);

        return 0;
}

//Mean is the arithmetic average of all values
void mean(const int a[]){
    int sum = 0;
    float mean;

    printf("\n\n%s\n%s\n%s\n","********","Mean","********");

    for(int i=0;i<SIZE;i++){
        sum += a[i];
    }

    mean = (float)sum/SIZE; //Use of cast operator since both sum and size are integers

    printf("The sum of the response is: %d\nMean of response is %3f\n",sum,mean);
}

//Median is the middle value of the sorted array
void median(int answer[]){

    int element = SIZE/2;

    printf("\n\n%s\n%s\n%s\n","********","Median","********");
    printf("Median value for given responses is %d element of sorted responses\n",element);

    printf("Original Responses are: ");
    printArray(answer);

    bubbleSort(answer);

    printf("Sorted Responses are: ");
    printArray(answer);

    //median = answer[element];
    printf("Median value for given response: %d \n",answer[element]);

}
//Mode is the value that occurs most frequently among all responses
void mode(int freq[],const int answer[]){

    int i;
    int largest = 0;
    int modeValue = 0;

    printf("\n\n%s\n%s\n%s\n","********","Mode","********");
    //Initialize freq to 0
    for(i=0;i<10;i++){
        freq[i] = 0;
    }
    
    for(i=0;i<SIZE;i++){
        ++freq[answer[i]];
    }

    printf("Response\tFrequency\tHistograms\n\n");

    for(i=1;i<10;i++){
        printf("%d\t\t%d\t\t",i,freq[i]);

        //Find the largest frequency

        if(freq[i]>largest){
            largest = freq[i];
            modeValue = i;
        }

        for(int j=0;j<freq[i];j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("Mode value is %d which occured %d times",modeValue,largest);
}


void printArray(const int a[]){
    for(int i=0;i<SIZE;i++){
        if(i%20 == 0){
            printf("\n");
        }
        printf("%3d",a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[]){
    int pass, i, hold;

    for(pass=1;pass<SIZE;pass++){
        for(i=0;i<SIZE-1;i++){
            if(a[i]>a[i+1]){
                hold = a[i+1];
                a[i+1]=a[i];
                a[i] = hold;
            }
        }
    }
}