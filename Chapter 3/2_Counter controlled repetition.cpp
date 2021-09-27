#include <stdio.h>

int main(void){
    int numStudents = 10;
    int grade;
    int total = 0;
    int counter = 0;

    int classAverage;

    while (counter<numStudents){
        printf("Enter grade for student %d: ",counter+1);
        scanf("%d", &grade);

        total = total+grade;

        counter = counter+1;
    }

    classAverage = total/numStudents;

    printf("Class average for %d students is: %d",numStudents,classAverage);

    return 0;
}