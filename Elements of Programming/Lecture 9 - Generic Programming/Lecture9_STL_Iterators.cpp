#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int> myVec;

    myVec.push_back(1234);
    myVec.push_back(5);
    myVec.push_back(7);

    // Defining an iterator:
    vector<int>::iterator it, it_end, it_start;

    it = myVec.begin();

    cout<<(*it)<<endl;
    it++; // Move down one item
    cout<<(*it)<<endl;
    it--; // Move up one item
    cout<<(*it)<<endl;

    it_end = myVec.end();
    it_end--;
    cout<<(*it_end)<<endl;

    it_start = myVec.begin();

    while (it_start != myVec.end()){
        cout<<(*it_start)<<endl;
        it_start++;
    }
}
