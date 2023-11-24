#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<list>
#include<string>

using namespace std;

struct student
{
    int num;
    string name;
    char grade;
};


int main(){
    list<student> students;

    student A;
    A.num = 1;
    A.name = "Akhil";
    A.grade = 'A';

    students.push_back(A);

    list<student>::iterator it;
    it = students.begin();
    cout<<(*it).name<<endl;
    cout<<(it->num)<<endl;
    cout<<(it->grade)<<endl;
    it->grade = 'B';
    cout<<(it->grade)<<endl;
}
