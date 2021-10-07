#include<stdio.h>

long fibonacci(long n); //function prototype

int main(void){
    long number;
    long result;

    printf("Enter an integer: 5");
    scanf("%d",&number);

    result = fibonacci(number);

    printf("Fibonacci(%d) = %d\n",number,result);

    return 0;
}

long fibonacci(long n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}