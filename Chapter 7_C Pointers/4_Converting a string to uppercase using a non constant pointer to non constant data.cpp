#include<stdio.h>
#include<ctype.h>

void convertToUppercase(char *sPtr);

int main(void){
    
    char string[] = "characters and $32.98";

    printf("String before conversion is: %s",string);

    convertToUppercase(string);
    printf("\nString after conversion is: %s",string);

    return 0;
}

void convertToUppercase(char *sPtr){
    //While character is not null
    while(*sPtr != '\0'){
        if(islower(*sPtr)){
            *sPtr = toupper(*sPtr);
        }
        ++sPtr;
    }
}