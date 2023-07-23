#include<stdio.h>
#include<stdlib.h>

class Stomach{
    public:
        Stomach(int startGas){myGas = startGas;}
        ~Stomach(){printf("Fart!\n");}
        void eat(){myGas++;}
        int myGas;
};

int main()
{
    Stomach a(5);
    a.eat();
    printf("%u\n",a.myGas);
}