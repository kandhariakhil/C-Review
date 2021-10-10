#include<stdio.h>

#define STUDENTS 3
#define GRADES 4

int minimum(const int a[][GRADES],int numStudents, int numGrades);
int maximum(const int a[][GRADES],int numStudents, int numGrades);
double average(const int a[], int numGrades);
void printArray(const int a[][GRADES],int numStudents,int numGrades);

int main(void){

    int i;

    const int studentGrades[STUDENTS][GRADES] = {{77,68,86,73},
                                                 {96,87,89,78},
                                                 {70,90,86,81}};

    printf("The grades are: \n");
    printArray(studentGrades,STUDENTS,GRADES);

    printf("Lowest grade is: %d\n",minimum(studentGrades,STUDENTS,GRADES));

    printf("Maximum grade is: %d\n",maximum(studentGrades,STUDENTS,GRADES));

    for(i=0;i<STUDENTS;i++){
        printf("Average for student %d is: %.2f\n",i+1,average(studentGrades[i],GRADES));
    }

    return 0;
}

int minimum(const int a[][GRADES],int numStudents, int numGrades){
    int lowestGrade = 100;

    for(int i=0;i<numStudents;i++){
        for(int j=0;j<numGrades;j++){
            if(a[i][j]<lowestGrade){
                lowestGrade = a[i][j];
            }
        }
    }

    return lowestGrade;
}

int maximum(const int a[][GRADES],int numStudents, int numGrades){
    int highestGrade = 0;

    for(int i=0;i<numStudents;i++){
        for(int j=0;j<numGrades;j++){
            if(a[i][j]>highestGrade){
                highestGrade = a[i][j];
            }
        }
    }

    return highestGrade;
}  

double average(const int a[], int numGrades){

    double totalGrade;

    for(int j=0;j<numGrades;j++){
        totalGrade += a[j];
    }
    return (double)totalGrade/numGrades;
}

void printArray(const int a[][GRADES],int numStudents,int numGrades){

    for(int i=0;i<numStudents;i++){
        printf("\nGrades for student %d\t\t",i+1);
        for(int j=0;j<numGrades;j++){
            printf("\t%d\t",a[i][j]);
        }
    }
    printf("\n");
}