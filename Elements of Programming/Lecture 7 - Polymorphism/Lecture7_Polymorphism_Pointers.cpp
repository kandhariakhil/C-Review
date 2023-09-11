#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

class Person{
    private:
        string m_name;
    public:
        Person(string name){
            m_name = name;
        }

        string getName(){
            return m_name;
        }

        ~Person(){}
};

class Student: public Person{
    private:
        int m_debt;
        string m_major;
    public:
        Student(string name, string major, int debt): Person(name){
            m_major = major;
            m_debt = debt;
        }

        void debtInfo(){
            cout<<m_debt<<endl;
        }

        void majorInfo(){
            cout<<m_major<<endl;
        }

        ~Student(){}
};

int main()
{
    Student J("Jack","MechE",19);
    Student *s;

    s = &J;
    s->debtInfo();
    string name = s->getName();
    cout<<name<<endl;

    Student A("Akhil","EE",1);
    Person *p;
    p = &A;

    string pName = p->getName();
    cout<<pName<<endl;

}
