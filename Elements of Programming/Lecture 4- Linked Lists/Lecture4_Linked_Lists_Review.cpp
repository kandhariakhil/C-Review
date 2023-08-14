#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

struct Node
{
    int val;
    Node *nextNode;
};

class LinkedList
{
private:
    Node *headPtr;
public:
    // Constructor
    LinkedList(){
        headPtr = nullptr;
    } 
    // Print items
    void printLinkedList(){}
    
    // Add items 
    void addItems(int v){
        // At the top of the list:
        // At the rear of the list:
        // In between the list:
    }

    // Delete items 
    void delItems(int v){}

    // Destructor
    ~LinkedList(){}
    
};


