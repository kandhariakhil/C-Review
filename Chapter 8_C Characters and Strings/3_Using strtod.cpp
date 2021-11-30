//d = strtod(string, &stringPtr) ->converts a sequence of characters representing a foating point to a double

#include<stdlib.h>
#include<stdio.h>

int main(void){
    const  char *string = "51.2% are admitted";

    double d;
    char *stringPtr;

    d = strtod(string,&stringPtr);

    printf("The string \"%s\" is converted to the\n",string);
    printf("double value %.2f and the string \"%s\"\n",d,stringPtr);
    
    return 0;

    //See strtol and strtoul
}