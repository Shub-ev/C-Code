#include "list.h"

void insert_end(struct Node** head, int val)
{
    struct Node* node = (struct Node*) malloc (sizeof(struct Node));
    node->data=val;

    if(*head == NULL)
    {
        *head = node;
        node->ptrDiff=NULL;
        printf("Added!\n");
        return;
    }
    else
    {
        // pointer to previous
        struct Node* prev = (struct Node*) 0;
        // iterator to iterate
        struct Node* iter = *head;
        while((struct Node*)((uintptr_t)(iter->ptrDiff) ^ (uintptr_t)prev) != NULL)
        {
            struct Node* temp = iter;
            iter = (struct Node*)((uintptr_t)(iter->ptrDiff) ^ (uintptr_t)prev);
            prev = temp;
        }

        iter->ptrDiff = (struct Node*) ((uintptr_t)(node) ^ (uintptr_t)(prev));
        node->ptrDiff = iter;
        printf("Added!\n");
        return;
    }
}