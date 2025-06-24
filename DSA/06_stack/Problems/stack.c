#include "stack.h"

struct Stack* create()
{
    struct Stack* s = (struct Stack*) malloc(sizeof(struct Stack));
    if(!s)
        return NULL;
    
    s->top = -1;
    s->capacity = 1;

    return s;
}

int isEmpty(struct Stack* s)
{
    if(s->top == -1)
        return 1;

    return 0;
}

void push(struct Stack* s)
{
    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    if(s->top == s->capacity - 1)
    {
        s->array = (int*) realloc(s->array, s->capacity*2);
        s->capacity *= 2;
    }

}