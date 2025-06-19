// implementation of stack using Linked List
#include <stdio.h>
#include <stdlib.h>

struct LinkNode
{
    int data;
    struct LinkNode *prev;
};

struct Stack
{
    struct LinkNode *head;
    struct LinkNode *top;
    int size;
};

struct Stack *create()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    if (!s)
        return NULL;

    s->head = NULL;
    s->size = 0;
    s->top = NULL;
}

void push(struct Stack* s)
{
    int data;
    printf("Enter Data : ");
    scanf("%d", &data);
    struct LinkNode* n = (struct LinkNode*) malloc (sizeof(struct LinkNode));
    if(!n)
        return NULL;

    n->data = data;
    n->prev = s->top;
    s->top = n;

    if(s->head == NULL)
        s->head = s->top;
    s->size++;
}

void pop(struct Stack* s)
{
    printf("Popped %d\n", s->top->data);
    struct LinkNode* n = s->top;

    s->top = s->top->prev;
    if(s->top == NULL)
        s->head = NULL;
    free(n);
}

int isStackEmpty(struct Stack* s)
{
    if(s->head == NULL){
        printf("Stack Underflow!\n");
        return 1;
    }
    else{
        printf("Stack is not empty!\n");
        return 0;
    }
}

void top(struct Stack* s)
{
    if(!isStackEmpty(s))
        printf("Top : %d", s->top->data);
}

void size(struct Stack* s)
{
    printf("Size : %d\n", s->size);
}

int main()
{
    struct Stack *s = create();
    int n;
    do
    {
        printf("Options: \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. IsStackEmpty \n");
        printf("4. Top \n");
        printf("5. Size \n");
        printf("Enter Option : ");
        scanf("%d", &n);
        if (n == 1)
            push(s);
        else if (n == 2)
            pop(s);
        else if (n == 3)
            isStackEmpty(s);
        else if (n == 4)
            top(s);
        else if (n == 5)
            capacity(s);
    } while (n != 9);
}