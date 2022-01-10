//Very good example of both pointers and recursion
#include<stdio.h>

void reverse(const char * const sPtr);

int main(void){
    char sentence[80];

    printf("Enter a line of text: \n");

    //Use fgets to read line of text from standard library
    fgets(sentence,80,stdin);
    printf("\nThe line printed backwards is:\n");
    reverse(sentence);
    return 0;
}

void reverse(const char * const sPtr){
    //If end of string
    if (sPtr[0]=='\0'){
        return;
    }
    else{
        reverse(&sPtr[1]);//recursively moves through the string
        putchar(sPtr[0]);//Prints n-1 string after it reaches the end of the string
    }
}