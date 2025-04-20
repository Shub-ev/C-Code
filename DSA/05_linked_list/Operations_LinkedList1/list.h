#ifndef LIST_H
#define LIST_H

// define structure for node
struct Node
{
    int data;
    struct Node* next;
};

extern struct Node* head;

int sum();
int max();

#endif