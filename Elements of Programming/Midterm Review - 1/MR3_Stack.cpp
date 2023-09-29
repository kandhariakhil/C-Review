#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

const int SIZE = 10;

class Stack
{
private:
    int m_top;
    int m_stack[SIZE];
public:
    Stack(){
        m_top = 0;
    }

    void push(int val){
        if (m_top<SIZE){
            m_stack[m_top] = val;
            m_top += 1;
        }
        else{
            cout<<"Stack is full"<<endl;
            exit(-1);
        }
    }

    int pop(){
        if (m_top == 0){
            cout<<"Stack is empty"<<endl;
            exit(-1);
        }
        else{
            m_top -= 1;
            int retVal = m_stack[m_top];
            return retVal;
        }
    }

    void printStack(){
        if (m_top > 0){
            for (int i = m_top-1;i>=0;i--){
                cout<<m_stack[i]<<"->";
            }
            cout<<"END"<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    ~Stack(){}
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.printStack();
    int popVal = st.pop();
    cout<<"Popped Value is "<<popVal<<endl;
    st.printStack();
    popVal = st.pop();
    cout<<"Popped Value is "<<popVal<<endl;
    st.printStack();
    for (int i = 0;i<10;i++){
        st.push(i);
    }
    st.printStack();
}

