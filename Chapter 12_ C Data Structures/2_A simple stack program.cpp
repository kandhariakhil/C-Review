#include<stdio.h>
#include<stdlib.h>

//Self-referential structure
struct stackNode{
    int data;
    struct stackNode *nextPtr; //stackNode pointer
};

typedef struct stackNode StackNode; //Synonym for struct stackNode
typedef StackNode *StackNodePtr; //Synonym for stackNode*

//function prototypes

void push (StackNodePtr *topPtr, int info);
int pop (StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

//Function main begins program execution

int main(void){
    StackNodePtr stackPtr = NULL;//Points to stack top
    int choice;
    int value;

    instructions(); //display the menu
    printf("?");
    scanf("%d",&choice);

    while(choice != 3){
        switch(choice){
            case 1:
                printf("\nEnter an integer: ");
                scanf("%d",&value);
                push(&stackPtr,value);
                printStack(stackPtr);
                break;
            case 2:
                //if stack is not empty
                if(!isEmpty(stackPtr)){
                    printf("The popped value is %d. \n",pop(&stackPtr));
                }
                printStack(stackPtr);
                break;
            default:
                printf("Invalid selection\n");
                instructions();
                break;
        }
        printf("?");
        scanf("%d",&choice);
    }

    printf("\nEnd of run!");
    return 0;
}

void instructions(void){
    printf("\nEnter Choice:\n"
            "1. To push a value on the stack.\n"
            "2. To pop a value off the stack.\n"
            "3. End program");
}

void push (StackNodePtr *topPtr, int info){
    StackNodePtr newPtr; //Pointer to new node

    newPtr = (StackNode*)malloc(sizeof(StackNode));

    //Insert the node at stack top
    if (newPtr != NULL){
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else{
        printf("%d not inserted, no memory available",info);
    }
}

int pop (StackNodePtr *topPtr){
    StackNodePtr tempPtr; //temporary node pointer
    int popValue;
    tempPtr = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);
    return popValue;
}

void printStack(StackNodePtr currentPtr){
    if(currentPtr == NULL){
        printf("Stack is empty.\n\n");
    }
    else{
        printf("The stack is: \n");

        while(currentPtr != NULL){
            printf("%d-->",currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

int isEmpty(StackNodePtr topPtr){
    return topPtr == NULL;
}