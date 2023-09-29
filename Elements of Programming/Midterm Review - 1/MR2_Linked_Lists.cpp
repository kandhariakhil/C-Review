#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

struct Node
{
    int val;
    Node *next;
};

class Linked_Lists
{
private:
    Node *headPtr;
public:
    // Constructor - create an empty list by pointing headPtr to nullptr
    Linked_Lists(){
        headPtr = nullptr;
    }

    // Methods to add elements to the list

    // Add element to front
    void addToFront(int newVal){
        // No elements in the list
        Node *p = new Node;
        p->val = newVal;
        p->next = headPtr;
        headPtr = p;
    }

    void addToRear(int newVal){
        // No elements in the list
        if (headPtr == nullptr){
            addToFront(newVal);
        }
        // List has elements - traverse to the last node
        else{
            Node *p = new Node;
            Node *temp = headPtr;
            while (temp->next != nullptr){
                temp = temp->next;
            }
            p->val = newVal;
            p->next = nullptr;
            temp->next = p;
        }
    }

    void addElement(int newVal,int preVal){

        if (headPtr==nullptr){
            addToFront(newVal);
            return;
        }

        Node *temp = headPtr;
        while(temp != nullptr){
            if (temp->val == preVal){
                Node *p = new Node;
                p->val = newVal;
                p->next = temp->next;
                temp->next = p;
                return;
            }
            temp = temp->next;
        }

        if (temp == nullptr){
            cout<<"End of list reached, value "<<preVal<<" not found"<<endl;
            return;
        }
    }

    void deleteItem(int delVal){
        
        if (headPtr ==nullptr){
            cout<<"List is empty"<<endl;
            return;
        }

        if (headPtr->val == delVal){
            Node *temp = headPtr;
            headPtr = temp->next;
            delete temp;
            return;
        }
        else{
            Node *temp = headPtr;
            while(temp != nullptr){
                if(temp->next != nullptr && temp->next->val == delVal){
                    break;
                }
                temp = temp->next;
            }
            if (temp != nullptr){
                Node *delNode = temp->next;
                temp->next = delNode->next;
                delete delNode;
            }
            
        }
    }

    void printList(){
        Node *p = headPtr;
        if (p == nullptr){
            cout<<"List is empty"<<endl;
        }
        else{
            while(p != nullptr){
                cout<<p->val;
                cout<<"->";
                p = p->next;
            }
            cout<<"NULL"<<endl;
        }
    }
    ~Linked_Lists(){
        Node *temp = headPtr;
        while(temp != nullptr){
            Node *delNode = temp->next;
            delete temp;
            temp = delNode;
        }
    }
};

int main(){
    Linked_Lists newList;
    newList.printList();
    newList.addToFront(5);
    newList.addToFront(10);
    newList.printList();
    newList.addToRear(25);
    newList.printList();
    newList.addElement(36,10);
    newList.printList();
    newList.addElement(99,25);
    newList.addElement(100,30);
    newList.printList();
    newList.addToRear(100);
    newList.printList();
    newList.deleteItem(100);
    newList.printList();
    newList.deleteItem(25);
    newList.printList();
}


