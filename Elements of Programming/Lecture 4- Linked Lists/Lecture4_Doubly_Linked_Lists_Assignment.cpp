#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

struct Node
{
    int val;
    Node *nextNode;
};

class DoublyLinkedList
{
private:
    Node *headPtr, *tailPtr;
public:
    // Constructor
    DoublyLinkedList(){
        headPtr = nullptr;
        tailPtr = nullptr;
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
    ~DoublyLinkedList(){}
    
};

