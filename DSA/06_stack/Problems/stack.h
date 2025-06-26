// create .h file to maintain stack related code
#ifndef STACK
#define STACK

// global imports
#include<stdio.h>
#include<stdlib.h>

// stack struct
struct Stack
{
    int* array;
    int capacity;
    int top;
};

struct Stack* s;

struct Stack* create();
void push(struct Stack*);
void pop(struct Stack*);
int isEmpty(struct Stack*);
void top(struct Stack*);
void capacity(struct Stack*);

#endif