#include <stdio.h>

int main(void){

    int counter = 0;
    int numa = 0, numb = 0;
    int numStudents = 10;
    int result;

    while (counter<numStudents){
        printf("Enter student %d result: ",counter+1);
        scanf("%d",&result);

        if (result==1){
            numa += 1;
        }
        else if (result==2){
            numb += 1;
        }
        else{
            printf("Please input valid result \n");
            counter -= 1;
        }

        counter += 1;
    }
    printf("Number of students passed: %d. \nNumber of students failed: %d \n",numa,numb);
    if(numa>=8){
        printf("Bonus to instructor");
    }

    return 0;

}