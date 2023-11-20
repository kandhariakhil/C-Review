#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> strs;
    vector<int> nums(3);

    //vector<Robot> robots; ->robots is a class name in this case

    vector<int> names(950); //Vector with starts with N elemets initialized to zero

    strs.push_back("Akhil");
    strs.push_back("Ali");

    nums.push_back(123);

    cout<<strs[0]<<endl;

    strs[0] = "Kandhari";

    cout<<strs[0]<<endl;

    cout<<nums.back()<<endl;

    nums.pop_back();

    cout<<nums.back()<<endl;

    cout<<nums.size()<<endl;

}
