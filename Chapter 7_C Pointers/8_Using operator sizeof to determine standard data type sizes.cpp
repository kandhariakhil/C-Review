#include<stdio.h>

int main(void){
    char c;
    int i;
    short s;
    long l;
    float f;
    double d;
    long double ld;
    int array[20];
    int *Ptr = array; //Create pointer to array

    printf("sizeof c = %d\tsizeof(char) = %d\n"
            "sizeof i = %d\tsizeof(int) = %d\n"
            "sizeof s = %d\tsizeof(short) = %d\n"
            "sizeof l = %d\tsizeof(long) = %d\n"
            "sizeof f = %d\tsizeof(float) = %d\n"
            "sizeof d = %d\tsizeof(double) = %d\n"
            "sizeof ld = %d\tsizeof(long double) = %d\n"
            "sizeof array = %d\n"
            "sizeof Ptr = %d",
            sizeof c,sizeof(char),
            sizeof i,sizeof(int),
            sizeof s,sizeof(short),
            sizeof l,sizeof(long),
            sizeof f,sizeof(float),
            sizeof d,sizeof(double),
            sizeof ld,sizeof(long double),
            sizeof array,
            sizeof Ptr);
    return 0;
}