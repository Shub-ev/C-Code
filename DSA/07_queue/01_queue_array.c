// Queue using array

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// queue structure
struct Queue
{
    int front, rear;
    int capacity;

    int* array;
};

// create queue
struct Queue* queue(uint8_t size)
{
    // now we dont need to explicitly convert void pointer to specific pointer
    // this will be done by compiler
    struct Queue* q = malloc(sizeof(struct Queue)); // returns void* pointer
    if(!q)
    {
        return NULL;
    }

    q->array = malloc(sizeof(int) * size);
    if(!q->array)
    {
        return NULL;
    }

    q->capacity = size;
    q->front = q->rear = -1;

    return q;
}

// check if queue is full
bool is_queue_full(struct Queue* q)
{
    if((q->rear+1) % q->capacity == q->front)
    {
        printf("Queue is Full!\n");
        return 1;
    }
    return 0;
}
// check if queue is empty
bool is_queue_empty(struct Queue* q)
{
    if(q->front == -1)
    {
        printf("Queue is empty!\n");
        return 1;
    }
    return 0;
}

// enqueue
void enqueu(struct Queue* q)
{
    if(is_queue_full(q))
    {
        return;
    }

    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    q->rear = (q->rear + 1) % q->capacity;
    q->array[q->rear] = data;

    if(q->front == -1)
        q->front = q->front+1;

    printf("Data entered!\n");
    return;
}

// dequeue
void dequeue(struct Queue* q)
{
    if(is_queue_empty(q))
    {
        return;
    }
    
    printf("Dequeued : %d\n", q->array[q->front]);
    
    if(q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else 
    {
        q->front = (q->front+1) % q->capacity;
    }
    return;
}

// sizeof queue
void sizeof_queue(struct Queue* q)
{
    printf("Size of Queue : %d\n", abs(q->front - q->rear) + 1);
}

int main()
{
    int n;
    printf("Enter Queue Size: ");
    scanf("%d", &n);

    struct Queue* q = queue(n);
    do
    {
        printf("Enter Option: \n");
        printf("1. Enqueue.\n");
        printf("2. Dequeue.\n");
        printf("3. IsFull.\n");
        printf("4. IsEmpty.\n");
        printf("5. Size.\n");
        printf("6. Exit\n");
        scanf("%d", &n);

        if(n == 1)
        {
            enqueu(q);
        }
        else if(n == 2)
        {
            dequeue(q);
        }
        else if(n == 3)
        {
            is_queue_full(q);
        }
        else if(n == 4)
        {
            is_queue_empty(q);
        }
        else if(n == 5)
        {
            sizeof_queue(q);
        }
    }while(n != 6);
}