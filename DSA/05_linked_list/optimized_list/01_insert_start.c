#include "list.h"

void insert_start(struct Node** head, int val)
{
    struct Node* node = (struct Node*) malloc (sizeof(struct Node));
    node->data=val;

    if(*head == NULL)
    {
        *head = node;
        node->ptrDiff = NULL;
        return;
    }
    else
    {
        
    }
}