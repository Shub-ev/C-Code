#ifndef CIRCULAR_LIST
#define CIRCULAR_LIST

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void insert_origin(struct Node**, int);
void insert_end(struct Node**, int);
void display(struct Node*);

#endif