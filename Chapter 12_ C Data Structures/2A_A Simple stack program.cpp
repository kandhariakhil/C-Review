#include<stdio.h>
#include<stdlib.h>

//Self referential structure
struct stackNode{
    char data;
    struct stackNode *nextPtr; //stacknode pointer
};

typedef struct stackNode StackNode; //synonym for struct stackNode
typedef StackNode *StackNodePtr; //Synonym for stackNode*

//Function prototypes

void push(StackNodePtr *topPtr, char info);
char pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main(void){
    StackNodePtr stackPtr = NULL; //Points to stack top
    int choice;
    char value;

    instructions();
    printf("?");
    scanf("%d",&choice);

    while(choice!=3){
        switch(choice){
            case 1:
                printf("\nEnter a character: \n");
                scanf("%c",&value);
                push(&stackPtr,value);
                printStack(stackPtr);
                break;
            case 2:
                //If stack is not empty
                if(!isEmpty(stackPtr)){
                    printf("The popped value is %c\n",pop(&stackPtr));
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

void push(StackNodePtr *topPtr, char info){
    StackNodePtr newPtr; //Pointer to new node

    newPtr = (StackNode*)malloc(sizeof(StackNode));

    //Insert the node at the stack top
    if(newPtr != NULL){
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else{
        printf("%c not inserted, no memory available\n",info);
    }
}

char pop(StackNodePtr *topPtr){
    StackNodePtr tempPtr;//temporary pointer
    char popValue;
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
            printf("%c-->",currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

int isEmpty(StackNodePtr topPtr){
    return topPtr == NULL;
}