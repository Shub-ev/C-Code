#include "list.h"

void display(struct Node* head)
{
    if(head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else
    {
        // points previous
        struct Node* prev = (struct Node*) 0;
        // iterator
        struct Node* iter = head;

        while((struct Node*) ((uintptr_t)(prev) ^ (uintptr_t)(iter->ptrDiff)) != NULL)
        {
            printf("%d->", iter->data);
            struct Node* temp = iter;
            iter = (struct Node*) ((uintptr_t)(iter->ptrDiff) ^ (uintptr_t)(prev));
            prev = temp;
        }
        printf("NULL\n");
    }
}