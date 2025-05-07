#ifndef LINKED_LIST
#define LINKED_LIST

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void insert_start(struct Node**, int);
void insert_end(struct Node**, int);
void insert_loc(struct Node**, int, int);

void display(struct Node*);

void delete_start(struct Node**);
void delete_end(struct Node*);
void delete_loc(struct Node**, int);

#endif