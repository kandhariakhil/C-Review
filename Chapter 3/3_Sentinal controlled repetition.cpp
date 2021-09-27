#include<stdio.h>

int main(void){

    int grade = 0;
    float averageGrade = 0;
    int gradeSum = 0;
    int iter = 0;
    int counter = 0;

    while (counter != -1){

        printf("Enter student %d grade: \n",iter+1);
        scanf("%d",&grade);

        if (grade==-1){
            counter = -1;
            if(iter == 0){
                printf("No student information entered");
            }
            else{
                averageGrade = (float) gradeSum/(iter); //cast operation since int/int will be stored as an int first. This casting (float) helps avoid truncation, known as cast operator
                printf("Average of %d students is: %.5f",iter,averageGrade);
            }
        }
        iter += 1;
        gradeSum += grade;   
    }

    return 0;
}