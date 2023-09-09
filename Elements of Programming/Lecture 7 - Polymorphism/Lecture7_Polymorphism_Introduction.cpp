#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

class Person
{
private:
    string m_name;
    int m_age;
public:
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }

    string getName(){
        return m_name;
    }

    int getAge(){
        return m_age;
    }

    ~Person(){}
};

class Student:public Person{
    private:
        float m_gpa;
    public:
        Student(string name, int age, float gpa): Person(name,age) {
            m_gpa = gpa;
        }
        float getGPA(){
            return m_gpa;
        }
        ~Student(){}
};

// Any time we use a base pointer or base reference to access a derived objext is polymorphism
// void introduce (Person &p)
void introduce(Person *p){
    cout<<"Hello "<<p->getName()<<endl; //getName must have a return type cannot be void
}

int main(){
    printf("Creating a person \n");
    Person P("Akhil",33);
    Student S("Joe",18,2.3);
    cout<<"Student "<<S.getName()<< " GPA is "<<S.getGPA()<<endl;
    introduce(&P); //If it was void introduce (&p), then just introduce(P)
    introduce(&S);
}