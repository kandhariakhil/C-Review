#include<stdio.h>

union number
{
    int x;
    double y;
};

int main(void){

    union number value; //Define union variable

    value.x = 100; //Put an integer into the union

    printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
            "Put a value in the the integer member",
            "and print both member.",
            "int:",value.x,"double",value.y);

    value.y = 100.0; //Put an integer into the union

    printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
            "Put a value in the the floating member",
            "and print both member.",
            "int:",value.x,"double",value.y);

    return 0;
}
