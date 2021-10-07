#include <stdio.h>

int main(void){
    int score;

    printf("Enter student's score: \n");
    scanf("%d",&score);

    if (score>=90)
        printf("Grade: A \n");
    else if (score>=80)
        printf("Grade: B \n");
    else if (score>=70)
        printf("Grade: C \n");
    else if (score>=60)
        printf("Grade: D \n");
    else if (score>=50)
        printf("Grade: E \n");
    else
        printf("Grade: F \n");

    //Conditional operator ?
    score>=50? printf("Student has passed course"):printf("Student has failed course");

    return 0;
}