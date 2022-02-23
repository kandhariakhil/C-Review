//Operating and maintaining a list
#include<stdio.h>
#include<stdlib.h>

//Self referential structure
struct listNode{
    char data; //Each listNode contains a character
    struct listNode *nextPtr; // Pointer to next node
};

typedef struct listNode ListNode; //Synonym for struct listNode
typedef ListNode *ListNodePtr; //Synonym for ListNode*

//Function prototypes

void insertNode(ListNodePtr *sPtr, char value);
char deleteNode(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void){
    ListNodePtr startPtr = NULL; //Initially there are no nodes
    int choice; //User's choice
    char item; //Char entered by user

    instructions(); //Displays the menu
    printf("?");
    scanf("%d",&choice);

    //Loop while user does not choose 3
    while(choice !=3){
        switch(choice){
            case 1:
                printf("Enter a character: ");
                scanf("\n%c", &item);

                insertNode(&startPtr,item); //Insert item in list
                printList(startPtr);
                break;
            case 2: //Delete an element
                //If list is not empty
                if(!isEmpty(startPtr)){
                    printf("Enter character to be deleted: ");
                    scanf("\n%c",&item);

                    //if item is found, remove it
                    if(deleteNode(&startPtr, item)){
                        printf("%c deleted\n",item);
                        printList(startPtr);
                    }
                    else{
                        printf("%c not found.\n\n",item);
                    }
                }
                else{ 
                    printf("List is empty.\n\n");
                }
                break;
            default:
                printf("Invalid choice.\n\n");
                instructions();
                break;
        }

        printf("?");
        scanf("%d",&choice);
    }

    printf("End of run\n");
    return 0;
}

void instructions(void){
    printf("Enter your choice:\n"
            "1 to insert an element into the list.\n"
            "2 to delete an element into the list.\n"
            "3 to end\n");
}

//Insert a new value into the list in sorted order
void insertNode(ListNodePtr *sPtr, char value){
    ListNodePtr newPtr; //Pointer to new node
    ListNodePtr previousPtr; //Pointer to previous node in list
    ListNodePtr currentPtr; //Pointer to current node in list

    //Note casting using ListNode to use malloc this is different in C and C++
    newPtr = (ListNode *)malloc(sizeof(ListNode));//Create node

    if(newPtr != NULL){//is space available
        newPtr->data = value; //Place value in node
        newPtr->nextPtr = NULL; //Node does not link to another node

        previousPtr = NULL;
        currentPtr = *sPtr;

        //Loop to find the correct location in the list
        while(currentPtr != NULL && value> currentPtr->data){
            previousPtr = currentPtr;//walk to
            currentPtr = currentPtr->nextPtr;//...next node
        }

        //Insert new node at the beginning of list
        if(previousPtr == NULL){
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else{//Insert new node between previousPtr and currentPtr
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else{
        printf("%c not inserted. No memory available.\n", value);
    }
}

//Delete a list element
char deleteNode(ListNodePtr *sPtr, char value){
    ListNodePtr previousPtr; //Pointer to previous node in list
    ListNodePtr currentPtr; //Pointer to current node in list
    ListNodePtr tempPtr; //Temporary node pointer

    //Delete first node
    if(value == (*sPtr)->data){
        tempPtr = *sPtr;//Hold onto node being removed
        *sPtr = (*sPtr)->nextPtr;//de-thread the node
        free(tempPtr);
        return value;
    }
    else{
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;

        //Loop to find the correct location in the list
        while(currentPtr != NULL && currentPtr->data != value){
            previousPtr = currentPtr;
            currentPtr=currentPtr->nextPtr;
        }

        //Delete node at currentPtr
        if(currentPtr != NULL){
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return 0;
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
            printf("%c -->",currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}