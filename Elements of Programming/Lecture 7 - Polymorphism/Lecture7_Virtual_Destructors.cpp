#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

class Prof
{
private:
    int m_IQ;
public:
    Prof(){
        cout<<"Prof created"<<endl;
        m_IQ = 95;
    }
    virtual ~Prof(){
        cout<<" I died smart: "<<m_IQ<<endl;
    }
};

class MathProf: public Prof
{
private:
    int *m_pTable;
public:
    MathProf(){
        cout<<"Math Prof created"<<endl;
        m_pTable = new int[6];
        for(int i=0;i<6;i++){
            m_pTable[i]=i*i;
        }
    }
    virtual ~MathProf(){
        delete [] m_pTable;
        cout<<"Table deleted"<<endl;
    }
};

int main(){
    Prof *p;
    p = new MathProf;
    delete p;
}