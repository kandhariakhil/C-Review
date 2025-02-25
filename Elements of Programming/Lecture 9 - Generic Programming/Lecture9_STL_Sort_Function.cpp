#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    vector<string> n;

    vector<string>::iterator it;

    n.push_back("Jim");
    n.push_back("Alex");
    n.push_back("Tim");
    n.push_back("Akhil");
    
    it = n.begin();

    while (it != n.end())
    {
        cout<<(*it)<<endl;
        it++;
    }

    sort(n.begin(),n.end()); //sort the whole vector

    cout<<"Sorted list: "<<endl;

    it = n.begin();

    while (it != n.end())
    {
        cout<<(*it)<<endl;
        it++;
    }
}