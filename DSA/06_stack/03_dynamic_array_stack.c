// dynamic array stack using doubling strategy
#include <stdio.h>
#include <stdlib.h>

struct Array_Stack
{
    int top;
    int* array;
    int capacity;
};

struct Array_Stack* create()
{
    struct Array_Stack* s = (struct Array_Stack*) malloc(sizeof(struct Array_Stack));
    if(!s)
        return NULL;
    
    s->capacity = 1;
    s->top = -1;

    s->array = (int*) malloc (sizeof(int) * s->capacity);
    if(!s->array)
        return NULL;
    
    return s;
}

int isStackFull(struct Array_Stack* s)
{
    if(s->top == s->capacity - 1)
    {
        printf("Stack Overflow!\n");
        return 1;
    }

    return 0;
}

int isStackEmpty(struct Array_Stack* s)
{
    if(s->top == -1)
    {
        printf("Stack Underflow!\n");
        return 1;
    }

    return 0;
}

void push(struct Array_Stack* s)
{
    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    if(isStackFull(s))
    {
        s->array = (int*) realloc(s->array, s->capacity * 2);
        s->capacity *= 2;
    }
    s->array[++s->top] = data;
}

void pop(struct Array_Stack* s)
{
    if(!isStackEmpty(s))
    {
        printf("Popped %d!\n", s->array[s->top--]);

        if(s->capacity == s->top*2)
        {
            s->array = realloc(s->array, s->top);
            printf("New Size : %d\n", s->top);
        }
    }
}

void top(struct Array_Stack* s)
{
    if(!isStackEmpty(s))
    {
        printf("Top : %d\n", s->array[s->top]);
    }
}

void capacity(struct Array_Stack* s)
{
    printf("Capacity of Stack : %d\n", s->capacity);
}

int main()
{
    struct Array_Stack* s = create();

    int n;
    do
    {
        printf("Options: \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. IsStackFull \n");
        printf("4. IsStackEmpty \n");
        printf("5. Top \n");
        printf("6. Size \n");
        printf("Enter Option : ");
        scanf("%d", &n);

        if(n == 1)
            push(s);
        else if(n == 2)
            pop(s);
        else if(n == 3)
            isStackFull(s);
        else if(n == 4)
            isStackEmpty(s);
        else if(n == 5)
            top(s);
        else if(n == 6)
            capacity(s);
    } while (n != 9);
    
}