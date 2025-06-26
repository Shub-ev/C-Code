#include <stdio.h>

struct Queue
{
    int size;
    int capacity;
    int front, rear;
    int* array;
}

struct Queue* create()
{
    struct Queue* q = malloc(sizeof(struct Queue));
    if(!q)
    {
        return NULL;
    }

    q->array = malloc(sizeof(int));
    if(!q->array)
    {
        return NULL;
    }

    q->capacity = 1;
    q->size = 0;
    q->front = q->rear = -1;

    return q;
}

int is_queue_full(struct Queue* q)
{

}

int is_queue_empty(struct Queue* q)
{

}

int enqueue(struct Queue* q)
{
    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    if(is_queue_full(q))
    {
        printf("Queue is Full! Capacity Extend!?\n");
        return;
    }

    q->rear = (q->rear + 1) % q->capacity;
    q->array = 
    
}

int dequeue(struct Queue* q)
{

}

int main()
{

}