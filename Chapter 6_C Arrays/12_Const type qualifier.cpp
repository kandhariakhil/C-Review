//Since arrays are passed by reference one can make changes to arrays when not needed.
//The const qualifier prevents this from happening.
//This code will NOT RUN

#include<stdio.h>

void tryToModifyArray(const int b[]);

int main(void){
    int a[] = {10,20,30};
    tryToModifyArray(a);
    printf("%d,%d,%d\n",a[0],a[1],a[2]);

    return 0;
}

//This code will not run since b needs to not be a const
void tryToModifyArray(const int b[]){
    b[0] /= 2;
    b[1] /= 2;
    b[2] /= 2;
}