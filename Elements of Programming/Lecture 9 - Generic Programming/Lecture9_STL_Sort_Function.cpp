#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    vector<string> n;

    n.push_back("Akhil");
    n.push_back("Jim");
    n.push_back("Alex");

    sort(n.begin(),n.end()); //sort the whole vector
}