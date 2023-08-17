#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stack>

// using namespace std;

const int SIZE = 100;
std::stack<int> istack; //stack of ints

class Stack
{
private:
    int m_stack[SIZE];
    int m_top;
public:
    Stack(){
        m_top = 0; //Initialize our stack we specify that the first item should go to the 0th slot of the array
    }
    void push(int val){
        if (m_top>=SIZE){
            exit(-1); //overflow
        }
        m_stack[m_top] = val;
        m_top +=1;
    }
    int pop(){
        if (m_top == 0){
            exit(-1); //underflow
        }
        m_top -= 1; //Since m_top points to where our next item will be pushed, first we decrement it to where the current top item is
        return m_stack[m_top]; //Return current top item to user
    }
    // bool is_empty(void);
    // int peek_top();
    // ~Stack();
};

int main(){
    // Custom stack
    Stack is;
    int a;
    is.push(5);
    is.push(10);
    a = is.pop();
    std::cout<<a<<std::endl;
    is.push(7);

    // In-built stack
    istack.push(10); // add item to top
    istack.push(20); // add item to top
    std::cout<<istack.top()<<std::endl; // get top value
    istack.pop(); // kill top value
    if (istack.empty()==false){
        std::cout<<istack.size()<<std::endl;
    }
}