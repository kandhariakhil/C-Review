#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<set>
#include<string>

using namespace std;

struct Course
{
    string name;
    int units;
};

bool operator<(const Course &a, const Course &b){
    return (a.name<b.name);
}


int main(){
    set<int> a;
    a.insert(2);
    a.insert(3);
    a.insert(4);

    a.insert(2); //duplicate - ignored

    cout<<a.size()<<endl;

    a.erase(2);

    cout<<a.size()<<endl;

    set<Course> myClasses;
    Course lec1;
    lec1.name = "EMAE400";
    lec1.units = 16;

    myClasses.insert(lec1);

    set<int>::iterator it;
    it = a.find(3);
    if (it == a.end()){
        cout<<"3 was not found";
        return 0;
    }
    cout<<"Found "<<(*it)<<endl;

    it = a.begin();
    while (it != a.end()){
        cout<<*it<<endl;it++;
    }
}
