#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

// global variables
bool solvable; 
int drow, dcol;
char m[10][11] = {
    "**********",
    "*        *",
    "* ****** *",
    "* *    * *",
    "* * ** * *",
    "* *  * * *",
    "* **** * *",
    "*    *   *",
    "******** *",
    "**********"
};

void solve(int row,int col){
    m[row][col] = '#'; //Drop crumb
    if (row == drow && col == dcol){
        solvable = true; // done
    }

    if(m[row-1][col]==' ')
        solve(row-1,col);
    if(m[row+1][col]==' ')
        solve(row+1,col);
    if(m[row][col-1]==' ')
        solve(row,col-1);
    if(m[row][col+1]==' ')
        solve(row,col+1);  
}

int main(){
    solvable = false;
    drow = 9;
    dcol = 9;
    solve(1,1);
    if (solvable == true){
        cout<<"Possible";
    }
    else{
        cout<<"Not Possible";
    }
}
