// Queues using linked lists

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

// using namespace std;

struct Node
{
    int val;
    Node *nextNode;
};

class Queue
{
private:
    Node *headPtr;
    Node *tailPtr;
public:
    Queue(){
        headPtr = nullptr;
        tailPtr = nullptr;
    }
    void push(int new_val){
        if(headPtr == nullptr && tailPtr == nullptr){
            Node *newNode = new Node;
            newNode->val = new_val;
            newNode->nextNode = headPtr;
            headPtr = newNode;
            tailPtr = newNode;
        }
        else{
            Node *newNode = new Node;
            newNode->val = new_val;
            tailPtr->nextNode = newNode;
            newNode->nextNode = nullptr;
            tailPtr = newNode;
        }
    }

    int pop(){
        if(headPtr == nullptr){
            printf("Queue is empty, no node to pop \n");
            return 0;
        }
        else{
            Node *temp = headPtr;
            int val_return = temp->val;
            headPtr = temp->nextNode;
            if (!headPtr){
                tailPtr = nullptr;
            }
            delete temp;
            return val_return;
        }
    }
    void viewFront(){
        if (headPtr == nullptr){
            printf("Queue is empty \n");
            return;
        }
        else{
            printf("Queue front value is %d \n",headPtr->val);
        }
    }
    void printQueue(){
        Node *p = headPtr;
        if (p == nullptr){
            printf("Queue is empty \n");
        }
        else{
            while (p != nullptr){
                printf("%d ->",p->val);
                if (p->nextNode == nullptr){
                    printf(" NULL");
                }
                p = p->nextNode;
            }
            printf("\n");
        }

    }
    ~Queue(){
        Node *p = headPtr;
        while (p != nullptr){
            Node *n = p->nextNode;
            delete p;
            p = n;
        }
    }
};

int main(){
    Queue testQueue;
    testQueue.push(5);
    testQueue.push(10);
    testQueue.push(12);
    testQueue.printQueue();
    int popValue = testQueue.pop();
    printf("Popped value is %d \n", popValue);
    testQueue.printQueue();
    testQueue.push(7);
    testQueue.printQueue();
    testQueue.pop();
    testQueue.printQueue();
    testQueue.viewFront();
    testQueue.pop();
    testQueue.pop();
    testQueue.pop();
    testQueue.push(100);
    testQueue.printQueue();
    testQueue.pop();
    testQueue.printQueue();
}