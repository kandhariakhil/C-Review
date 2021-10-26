#include<stdio.h>

void printCharacters(const char *sPtr);

int main(void){
    char string[] = "print characters of a string";

    printf("The string is: \n");
    printCharacters(string);
    printf("\n");
    return 0;
}

//sPtr cannot modify the c haracter to which it points, it is a read-only pointer

void printCharacters(const char *sPtr){
    while (*sPtr != '\0'){
        printf("%c",*sPtr);
        sPtr++;
    }

    //for(; *sPtr!='\0',sPtr++) -> no initialization
}