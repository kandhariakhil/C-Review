#include<stdio.h>
#include<stdlib.h>
#include<iostream>

const int SIZE = 6;

class circularQueue
{
private:
    int head, tail, count;
    int m_queue[SIZE];
public:
    circularQueue(){
        head = 0;
        tail = 0;
        count = 0;
    }

    void push(int new_val){
        if (count == SIZE){
            printf("Queue is full, cannot push node %d \n",new_val);
        }
        else{
            m_queue[tail] = new_val;
            tail = (tail+1)%SIZE;
            count +=1;
        }
    }

    int pop(){
        if (count ==0){
            printf("Queue is empty, no node to pop \n");
            return 0;
        }
        else{
            int return_val = m_queue[head];
            count -= 1;
            head = (head+1)%SIZE;
            return return_val;
        }
    }

    void printQueue(){
        int temp = head;
        for (int i = 0; i < count; i++)
        {
            printf("%d -> ",m_queue[temp]);
            temp = (temp+1)%SIZE;
        }
        printf("NULL \n");
        
    }

    void viewFront(){
        if (count == 0){
            printf("Queue is empty");
        }
        else {
            printf("Queue front value is %d \n", m_queue[head]);
        }
    }
};

int main(){
    circularQueue testQueue;
    testQueue.push(5);
    testQueue.push(10);
    testQueue.printQueue();
    testQueue.push(12);
    testQueue.printQueue();
    int popValue = testQueue.pop();
    printf("Popped value is %d \n", popValue);
    testQueue.printQueue();
    testQueue.push(7);
    testQueue.printQueue();
    testQueue.push(124);
    testQueue.printQueue();
    testQueue.push(312);
    testQueue.printQueue();
    testQueue.push(445);
    testQueue.printQueue();
    testQueue.push(55);
    testQueue.printQueue();
    testQueue.pop();
    testQueue.printQueue();
    testQueue.pop();
    testQueue.printQueue();
    testQueue.push(74);
    testQueue.printQueue();
    testQueue.pop();
    testQueue.pop();
    testQueue.pop();
    testQueue.printQueue();
    testQueue.pop();
    testQueue.pop();
    testQueue.pop();
    testQueue.push(100);
    testQueue.printQueue();
    testQueue.viewFront();
}
