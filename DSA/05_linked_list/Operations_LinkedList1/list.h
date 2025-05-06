#ifndef LIST_H
#define LIST_H

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// define structure for node
struct Node
{
    int info;
    struct Node* next;
};

extern struct Node* head;

void sum(struct Node*);
void count_nodes(struct Node*);
void iterate(struct Node*);
void insert_node();

int max_node(struct Node*);
struct Node* search(struct Node*, int);

#endif