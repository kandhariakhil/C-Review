#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

struct Node
{
    int val;
    Node *nextNode;
    Node *prevNode;
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
    void addToFront(int v){
        Node *p = new Node;
        p->val = v;
        p->nextNode = headPtr;
        p->prevNode = nullptr;
        if(headPtr != nullptr){
            headPtr->prevNode = p;
        }
        headPtr = p;
    }

    void addToRear(int v){
        if (tailPtr == NULL){
            addToFront(v);
        }
        else{
            Node *p = new Node;
            p->val = v;
            tailPtr->nextNode = p;
            p->nextNode = nullptr;
            p->prevNode = tailPtr;
            tailPtr = p;
        }
    }

    void addInBetween(int v, int preInsertionVariable){
        if (headPtr == nullptr){
            addToFront(v);
        }
        else{
            Node *p = headPtr;
            // forward traversal
            while (p != nullptr){
                if (p->val == preInsertionVariable){
                    break;
                }
                p=p->nextNode;
            }
            Node *n = new Node;
            n->val = v;
            n->prevNode = p;
            n->nextNode = p->nextNode;
            // If p is tail pointer then make checks and adjustments
            if (p->nextNode == nullptr){
                tailPtr = n;
            }
            else{
                n->nextNode->prevNode = n;
            }
            p->nextNode = n;
        }
    }
    // Delete items 
    void delItems(int v){}

    // Destructor
    ~DoublyLinkedList(){}
    
};


