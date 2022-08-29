#include<stdio.h>
#include<stdlib.h>

//Self-referential structure
struct queueNode{
    char data;
    struct queueNode *nextptr; //QueueNode Pointer
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

//Function prototypes
void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions(void);

int main(void){
    QueueNodePtr headPtr = NULL; //Initialize head pointer
    QueueNodePtr tailPtr = NULL; //Initialize tail pointer
    int choice;
    char item;

    instructions();
    printf("?");
    scanf("%d",&choice);

    while(choice != 3){
        switch (choice)
        {
        case 1:
            printf("Enter a character: ");
            scanf("\n%c",&item);
            enqueue(&headPtr,&tailPtr,item);
            printQueue(headPtr);
            break;
        
        case 2:
            if(!isEmpty(headPtr)){
                item = dequeue(&headPtr,&tailPtr);
                printf("%c has been dequeued.\n",item);
            }
            printQueue(headPtr);
            break;
        default:
            printf("Invalid selection\n");
            instructions();
            break;
        }
        printf("?\n");
        scanf("%d",&choice);
    }
    printf("End of run");
    return 0;
}

void instructions(void){
    printf("\nEnter Choice:\n"
            "1. To enqueue a value on the queue.\n"
            "2. To dequeue a value off the queue.\n"
            "3. End program");
}
int isEmpty(QueueNodePtr headPtr){
    return headPtr == NULL;
}

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value){
    QueueNodePtr newPtr;

    newPtr = (QueueNode*)malloc(sizeof(QueueNode));

    if(newPtr != NULL){
        newPtr->data = value;
        newPtr->nextptr = NULL;

        //If empty, insert node at head
        if(isEmpty(*headPtr)){
            *headPtr = newPtr;
        }
        else{
        (*tailPtr)->nextptr = newPtr;
        }

        *tailPtr = newPtr;
    }
    else{
        printf("%c not inserted. No memory available.\n",value);
    }
}

char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
    char value; //Node value

    QueueNodePtr tempPtr; //temporary node pointer

    value = (*headPtr)->data;
    tempPtr = *headPtr;
    *headPtr =(*headPtr)->nextptr;

    //If queue is empty
    if (*headPtr == NULL){
        *tailPtr = NULL;
    }

    free(tempPtr);
    return value;
}

void printQueue(QueueNodePtr currentPtr){
    //If queue is empty
    if (currentPtr == NULL){
        printf("Queue is empty \n");
    }
    else{
        printf("The queue is: \n");

        while (currentPtr != NULL){
            printf("%c -->", currentPtr->data);
            currentPtr = currentPtr->nextptr;
        }

        printf("NULL\n\n");
    }
}
