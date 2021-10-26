#include<stdio.h>

void printCharacters(const char *sPtr);

int main(void){
    char string[] = "print characters of a string";

    printf("The string is: \n");
    printCharacters(string);
    printf("\n");
    return 0;
}

void printCharacters(const char *sPtr){
    while (*sPtr != '\0'){
        printf("%c",*sPtr);
        sPtr++;
    }

    //for(; *sPtr!='\0',sPtr++) -> no initialization
}