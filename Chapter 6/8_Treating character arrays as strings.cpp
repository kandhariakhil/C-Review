#include<stdio.h>

int main(void){

    char string1[20];
    char string2[] = "string literal";

    int i;

    printf("Enter a string: ");
    scanf("%s",string1);

    printf("string 1 is: %s\nstring 2 is: %s\n"
            "string 1 with spaces between characters is: \n",
            string1,string2);

    for(i =0; string1[i]!='\0';i++){
        printf("%c ",string1[i]);
    }

    printf("\n");
    return 0;
}