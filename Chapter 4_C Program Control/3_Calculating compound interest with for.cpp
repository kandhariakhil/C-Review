#include<stdio.h>
#include<math.h>

int main(void){
    float principal = 1000.00;
    int years = 10;
    float rate = 5.0/100;
    float amount;

    for(int i=1;i<=years;i++){
        amount = (principal)*pow(1+rate,i); //C++ does not have an exponential operator and uses pow in the math.h header to do this function

        printf("Amount for year %d = %.4f\n",i,amount);
    }

    return 0;
}