#include<stdio.h>
#include<ctype.h>

int main(void){
    //Using isdigit
    printf("%s\n%s%s\n%s%s\n\n","According to isdigit",
            isdigit('8')?"8 is a ":"8 is not a ","digit",
            isdigit('#')?"# is a ":"# is not a ","digit");

    //Using isalpha
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","According to isalpha",
            isalpha('8')?"8 is a ":"8 is not a ","letter",
            isalpha('#')?"# is a ":"# is not a ","letter",
            isalpha('A')?"A is a ":"A is not a ","letter",
            isalpha('d')?"d is a ":"d is not a ","letter");

    //Using isalnum
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","According to isalnum",
            isalnum('8')?"8 is a ":"8 is not a ","letter or digit",
            isalnum('#')?"# is a ":"# is not a ","letter or digit",
            isalnum('A')?"A is a ":"A is not a ","letter or digit",
            isalnum('&')?"d is a ":"& is not a ","letter or digit");

    //Using isxdigit
    printf("%s\n%s%s\n%s%s\n\n","According to isxdigit",
            isxdigit('F')?"F is a ":"F is not a ","hexadecimal digit",
            isxdigit('#')?"# is a ":"# is not a ","hexadecimal digit");

    return 0;

    //Similarly can use islower, isupper, tolower and toupper
    //isspace
    //iscntrl
    //ispunct
}