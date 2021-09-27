#include<stdio.h>
#include<stdlib.h>

//Function prototypes
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; //Global variable

int main(void)
{
    int x = 5; //local variable to main

    printf("local x in outer scope of main is %d \n",x);
    {
        int x = 7; //local variable to new scope

        printf("local x in inner scope of main is %d \n",x);
        //x = 7 is destroyed when this block is left
    }
    
    printf("local x in outer scope of main is %d \n",x);

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    
    printf("\nlocal x in main is %d\n",x);
    return 0;
}

void useLocal(void){
    int x = 25;
    printf("\nlocal x in useLocal is %d after entering useLocal\n",x);
    x++;
    printf("local x in useLocal is %d before exiting useLocal\n",x);
}

void useStaticLocal(void){
    static int x =50;
    printf("\nlocal static x in useStaticLocal is %d after entering useStaticLocal\n",x);
    x++;
    printf("local static x in useStaticLocal is %d before exiting useStaticLocal\n",x);
    //local variables declared as static will retain their values even when they're out of scope
}

void useGlobal(void){
    
    printf("\nglobal x in useGlobal is %d after entering useGlobal\n",x);
    x*=10;
    printf("local x in useglobal is %d before exiting useGlobal\n",x);
}