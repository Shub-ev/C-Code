#include "list.h"

void insert_end(struct Node** head, int val)
{
    if(*head == NULL)
    {
        insert_start(head, val);
        return;
    }
    else
    {
        // create node
        struct Node* node = (struct Node*) malloc (sizeof(struct Node*));
        node->data = val;
        node->next = NULL;

        // create iterator pointer
        struct Node* ptr = *head;

        // iterate
        while(ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = node;
        node->prev = ptr;
    }
}