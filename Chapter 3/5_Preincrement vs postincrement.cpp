#include<stdio.h>

int main(void){
    int c;

    c = 5;
    printf("Value of variable is %d\n",c);
    printf("Value of variable is %d\n",c++);
    printf("Value of variable is %d\n\n",c);

    c = 5;
    printf("Value of variable is %d\n",c);
    printf("Value of variable is %d\n",++c);
    printf("Value of variable is %d\n",c);

    return 0;


}