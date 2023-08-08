// Since we have a head pointer, we can also maintain a tail pointer

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

struct Node
{
    string value;
    Node *next;
};

class LinkedList
{
public:
    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void addToFront(string v){
        Node *p; //Temporary pointer and use the new command to allocate our new node
        p = new Node; 
        p->value = v; // Set value of p to given input
        p->next = head; // Set next to the initial head
        head = p; // Set head to the new node in the list
    }

    void addToRear(string v){
        if (head==nullptr){
            addToFront(v);
        }
        else
        {
            
            Node *n = new Node;
            n->value = v;
            tail->next = n; //tail points to the current last node
            n->next = nullptr;
            tail = n; // Tail should point to the last node again

        }
    }

    // void addItem(string v){
    //     if (head == nullptr){
    //         addToFront(v);
    //     }
    //     else if(/*if the new item belongs at the top*/)
    //     {
    //         addToFront(v);
    //     }
    //     else // New node belongs somewhere in the middle of the list
    //     {
    //         Node *p = head; //Start with the top node
    //         while(p->next!=nullptr){
    //             if(/*p points just above where we want to insert item*/) //Condition is met
    //             {
    //                 break; //break out of the loop
    //             }
    //             p=p->next;
    //         }
    //         Node *latest = new Node; //alloc and fill our new node
    //         latest->value = v;
    //         latest->next=p->next; //Link new node to the node below
    //         p->next=latest; //Link node above to new node
    //     } 
    // }

    void deleteitem(string v){
        if (head==nullptr){
            return;
        }
        
        if (head->value==v){
            Node *p = head;
            head = p->next;
            delete p;
            return;
        }

        else{
            Node *p = head;
            while(p != nullptr){
                if (p->next != nullptr && p->next->value==v){ // This allows us to find the node above the one we want to delete
                    break; // If condition is met, then p points to the node above
                }
                p=p->next;
            }
            if (p != nullptr){
                Node *deleteNode = p->next;
                p->next = deleteNode->next;
                delete deleteNode;
            }
        }
    }

    bool findItem(string v){
        Node *p = head;
        while (p != nullptr){
            if (p->value == v){
                return true;
            }
            p = p->next;
        }
        return false;
    }

    void printItems(){
        Node *p;
        p = head; //p points to 1st node
        while (p != nullptr){
            cout<<p->value<<endl;
            p=p->next;
        }
    }

    ~LinkedList(){
        Node *p = head;
        while (p != nullptr){
            Node *n = p->next;
            delete p;
            p = n;
        }
    }

    private:
    Node *head; //Only member variable needed is the head pointer
    Node *tail; 
};
