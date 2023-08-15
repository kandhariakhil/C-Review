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
    void printLinkedList(){
        Node *p = new Node;
        p = headPtr;
        while (p != nullptr){
            std::cout<<p->val<<std::endl;
            p = p->nextNode;
        }
    }
    
    // Methods to add items:
    void addToFront(int v){
        // At the top of the list:
        Node *p = new Node;
        p->val = v;
        p->nextNode = headPtr;
        headPtr = p;
    }

    void addToRear(int v){
        // At the rear of the list:
        if (headPtr==nullptr){
            addToFront(v);
        }
        else{
            Node *p = new Node;
            p = headPtr;
            while (p != nullptr){
                p = p->nextNode;
            }
            Node *n = new Node;
            n->val = v;
            n->nextNode = nullptr;
            p->nextNode = n;
        }
    }

    void addItem(int v, int preInsertionVariable){
        // In between the list:
        
        if (headPtr==nullptr){
            addToFront(v);
        }
        // Here we use a search criteria of where the item belongs
        // else if (criteria)
        else{
            Node *p = new Node;
            while (p!=nullptr){
                if (p->val == preInsertionVariable){
                    break;
                }
                p=p->nextNode;
            }
            Node *n = new Node;
            n->val = v;
            n->nextNode = p->nextNode;
            p->nextNode = n;
        }
    }
    // Delete items 
    void delItems(int v){
        if(headPtr == nullptr){
            return;
        }

        if(headPtr->val == v){
            Node *p = headPtr;
            headPtr = p->nextNode;
            delete p;
            return;
        }

        else{
            Node *p = headPtr;
            while (p != nullptr){
                if( p->nextNode != nullptr && p->nextNode->val == v){
                    break;
                }
                p = p->nextNode;
            }
            if (p != nullptr){
                Node *deleteNode = p->nextNode;
                p->nextNode = deleteNode->nextNode;
                delete deleteNode;
            }
        }
    }

    // Find item
    bool findItem(int v){
        Node *p = headPtr;
        while (p != nullptr){
            if(p->val == v){
                return true;
            }
            p = p->nextNode;
        }
        return false;
    }

    // Destructor
    ~LinkedList(){
        Node *p = headPtr;
        while (p != nullptr){
            Node *n = p->nextNode;
            delete p;
            p = n;
        }
    }    
};
