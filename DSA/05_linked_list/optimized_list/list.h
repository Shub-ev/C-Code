#ifndef OPTIM_LIST
#define OPTIM_LIST

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Node
{
    int data;
    struct Node* ptrDiff;
};

void insert_start(struct Node**, int val);
void insert_end(struct Node**, int val);
void insert_loc(struct Node**, int val, int loc);

void display(struct Node*);

#endif