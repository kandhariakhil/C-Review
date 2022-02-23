//Recreating program one for linked list 

#include<stdlib.h>
#include<stdio.h>

//Self reference structure
struct listNode
{
    int data; //Each listNode contains an integer value
    struct listNode *nextPtr; //Pointer to next node
};

//Declaring typedef for listNode and listNodePtr

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

//Function prototypes

void insertNode(ListNodePtr *sPtr, int value);
int deleteNode(ListNodePtr *sPtr, int value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void){
    ListNodePtr startPtr = NULL; //Initially there are no nodes
    int choice; //User's choice
    int item;

    instructions();
    printf("?");
    scanf("%d",&choice);

    //Loop while user does not choose 3
    while(choice != 3){
        switch (choice)
        {
        case 1:
            printf("\nEnter a number: ");
            scanf("%d",&item);

            insertNode(&startPtr,item);
            printList(startPtr);
            break;

        case 2:
            //If list is not empty
            if(!isEmpty(startPtr)){
                printf("Enter integer to be deleted:\n");
                scanf("%d",&item);

                if(deleteNode(&startPtr,item)){
                    printf("%d deleted\n", item);
                    printList(startPtr);
                }
                else{
                    printf("%d not found\n",item);
                }
            }
            else{
                printf("List is empty\n");
            }
            break;
        default:
            printf("Invalid choice\n\n");
            instructions();
            break;
        }
        printf("?");
        scanf("%d",&choice);
    }

    printf("End of run\n\n");
    return 0;  
}

void instructions(void){
    printf("Enter your choice:\n"
            "1 to insert an element into the list.\n"
            "2 to delete an element into the list.\n"
            "3 to end\n");
}

//return 1 if node is empty, 0 otherwise
int isEmpty(ListNodePtr sPtr){
    return sPtr == NULL;
}

void printList(ListNodePtr currentPtr){
    //If list is empty
    if(currentPtr == NULL){
        printf("List is empty.\n");
    }
    else{
        printf("The list is: \n");

        while(currentPtr != NULL){
            printf("%d -->",currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}

void insertNode(ListNodePtr *sPtr, int value){
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;

    newPtr = (ListNode*)malloc(sizeof(ListNode));//Create new pointer with the size of structure listNode

    if (newPtr != NULL){//space is available
        newPtr->data = value; //Assign value in the data part of the structure
        newPtr->nextPtr = NULL; //The node points to a NULL node

        previousPtr = NULL;
        currentPtr = *sPtr;

        //Loop to find correct insertion place
        while(currentPtr!=NULL && value>currentPtr->data){
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        //If value goes to the start of the list
        if(previousPtr==NULL){
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else{
            previousPtr->nextPtr=newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else{
        printf("No memory available");
    }
}

int deleteNode(ListNodePtr *sPtr, int value){
    ListNodePtr tempPtr;
    ListNodePtr currentPtr;
    ListNodePtr previousPtr;

    //Delete first node
    if(value == (*sPtr)->data){
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return value;
    }
    else{
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;

        while(currentPtr!=NULL && currentPtr->data != value){
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if(currentPtr != NULL){
            tempPtr = currentPtr;
            previousPtr->nextPtr=currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return 0;
}