#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    double d;
    d = atof("99.0");
    printf("\natof:\nThe string \"99.0\" converted to double is %.3f\nThe number divided by 2 is %.3f",d,d/2);

    printf("\n\n");
    int i;
    i = atoi("2593");
    printf("\natoi:\nThe string \"2593\" converted to int is %d\nThe number subtracted 593 is %d",i,i-593);

    printf("\n\n");
    long l;
    l = atol("1000000");
    printf("\natol:\nThe string \"1000000\" converted to int is %ld\nThe number divided by 2 is %ld",l,l/2);    

    return 0;
}