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

private:
Node *head; //Only member variable needed is the head pointer
};
