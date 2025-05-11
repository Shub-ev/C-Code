#ifndef CIRCULAR_LIST
#define CIRCULAR_LIST

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

extern struct Node* head;

void insert_origin(struct Node**, int);
void display(struct Node*);

#endif