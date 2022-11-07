//Create a binary tree and traverse it preorder, inorder and postorder

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Self-referential structure
struct treeNode
{
    struct treeNode *leftPtr; //Pointer to left subtree
    struct treeNode *rightPtr; //Pointer to right subtree
    int data; //Data
};

typedef struct treeNode TreeNode; //synonym for struct treeNode
typedef TreeNode *TreeNodePtr; //Synonym for TreeNode*

//Function prototypes
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

//Function main begins program execution
int main(void){
    int i; //Counter to loop from 1-10
    int item; //Variable to hold random values
    TreeNodePtr rootPtr = NULL; //Tree initially empty

    srand(time(NULL));
    printf("The numbers being placed in the tree are: \n");

    //Insert random values between 0 to 14 in the tree
    for (i=0;i<10;i++){
        item = rand() % 15;
        printf("%3d",item);
        insertNode(&rootPtr, item);
    }

    //Traverse the tree preorder
    printf("\n The preOrder traversal is: \n");
    preOrder(rootPtr);

    //Traverse the tree inorder
    printf("\n The inOrder traversal is: \n");
    inOrder(rootPtr);

    //Traverse the tree preorder
    printf("\n The postOrder traversal is: \n");
    postOrder(rootPtr);
    return 0;
}

void insertNode(TreeNodePtr *treePtr, int value){
    //If tree is empty
    if (*treePtr == NULL){
        *treePtr = (TreeNode*)malloc(sizeof(TreeNode));

        if (*treePtr != NULL){
            (*treePtr)->data=value;
            (*treePtr)->leftPtr=NULL;
            (*treePtr)->rightPtr = NULL;
        }
        else{
        printf("No free memory available\n");
        }
    }
    else{//tree is not empty
        //Data to insert is less than data in current node
        if(value<(*treePtr)->data){
            insertNode(&((*treePtr)->leftPtr),value);
        }
        else if(value>(*treePtr)->data){
            insertNode(&((*treePtr)->rightPtr),value);
        }
        else{
            printf("dup"); //Duplicate value
        }
    }
}

void inOrder(TreeNodePtr treePtr){
    if(treePtr != NULL){
        inOrder(treePtr->leftPtr);
        printf("%3d",treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}
void preOrder(TreeNodePtr treePtr){
    if(treePtr != NULL){
        printf("%3d",treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}
void postOrder(TreeNodePtr treePtr){
    if(treePtr != NULL){
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%3d",treePtr->data);
    }
}