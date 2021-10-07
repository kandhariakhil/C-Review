#include<stdio.h>

int main(void){

    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;
    int grade;

    printf("Enter the letter grade\n");
    printf("Enter the EOF character to end input\n");

    while((grade= getchar()) != EOF) {//EOF is end of file and is ctrl+d in mac/linux and ctrl+z in windows. It is in stdio.h
        switch(grade) {
            case 'A':
            case 'a':
                ++gradeA;
                break;
            case 'B':
            case 'b':
                ++gradeB;
                break;
            case 'C':
            case 'c':
                ++gradeC;
                break;
            case 'D':
            case 'd':
                ++gradeD;
                break;
            case 'F':
            case 'f':
                ++gradeF;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                printf("Incorrect letter grade entered, enter new grade\n");
                break;
        }
    }

    printf("Total A: %d, Total B: %d, Total C: %d, Total D: %d, Total F: %d",gradeA,gradeB,gradeC,gradeD,gradeF);

    return 0;
}