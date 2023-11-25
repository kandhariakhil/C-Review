#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<map>
#include<string>

using namespace std;

struct student
{
    string name;
    int idNum;
};

bool operator<(const student &a, const student &b){
    return (a.name<b.name);
}


int main(){

    map<string,long> name2num;
    name2num["Akhil"] = 2165021222;
    name2num["Joe"] = 3109991212;
    name2num["Bob"] = 5503134547;

    map<string,long>::iterator it;

    it = name2num.find("Akhil");

    cout<<(*it).first<<"'s number is "<<it->second<<endl;

    cout<<"Iterating through a map ->"<<endl;

    for (it = name2num.begin(); it != name2num.end(); it++){
        cout<<(*it).first<<"'s number is "<<it->second<<endl;
    }

    map<student,float> student2gpa;

    student d;
    d.name = "David";
    d.idNum = 30902121;

    student2gpa[d] = 1.3;
}
