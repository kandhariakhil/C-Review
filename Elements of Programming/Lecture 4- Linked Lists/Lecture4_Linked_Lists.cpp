// Using the example of a scavenger hunt as in the lecture notes:
// We can use a C++ structure to represent a treasure chest

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

// Structure chest will hold two things:
// 1. Current treasure - in our example use a string variable to hold treasure
// 2. Location of next clue
/*
struct Chest
{
    char treasure;
    struct Chest *nextChest; // This line states that each Chest variable holds a pointer to another Chest variable
};

// Example using locally created variables
int main(){
    Chest *first, *second, *third;
    first = new Chest;
    second = new Chest;
    third = new Chest;

    first->treasure = "Toast";
    first->nextChest = second;

    second->treasure = "bacon";
    second->nextChest = third;

    third->treasure = "eggs";
    third->nextChest = nullptr;

    delete first;
    delete second;
    delete third;
}
*/

// Let's take the above example and convert that into a linked list code
using namespace std;

struct Node
{
    // int id;
    // string name;
    // int phoneNumber;
    // float gpa;

    string value;
    Node *next;
};

class LinkedList
{
public:
LinkedList(){
    head = nullptr;
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
        Node *p;
        p = head;
        // Loop till p->next is not nullptr, the moment p->next is nullptr, p points at the last node
        while (p->next != nullptr){
            p = p->next;
        }
        Node *n = new Node;
        n->value = v;
        p->next = n; //p is the last current pointer and now it points to n
        n->next = nullptr;


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
};
