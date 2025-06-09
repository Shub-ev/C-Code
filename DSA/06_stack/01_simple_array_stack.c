// implementation of Stack using simple array
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

// structure for array based stack
struct Array_Stack
{
    int top;
    int* array;
    int capacity;
};

// method to initialize stack struct
struct Array_Stack* create_Stack()
{
    struct Array_Stack* s = (struct Array_Stack*) malloc(sizeof(struct Array_Stack));
    if(!s)
        return NULL;
    
    s->capacity = MAX_SIZE;
    s->top = -1;

    s->array = (int*)malloc(sizeof(int) * MAX_SIZE);
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
    if(!isStackFull(s))
    {
        int data;
        printf("Enter Data : ");
        scanf("%d", &data);

        s->array[++s->top] = data;
    }

}

void pop(struct Array_Stack* s)
{
    if(!isStackEmpty(s))
    {
        printf("%d popped!\n", s->array[s->top]);
        s->top--;
    }
}

void top(struct Array_Stack* s)
{
    printf("Top : %d \n", s->array[s->top]); 
}

void size(struct Array_Stack* s)
{
    printf("Stack Capacity : %d\n", s->capacity);
}

int main()
{
    struct Array_Stack* s = create_Stack();
    
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
            size(s);

    }while(n != 9);
}