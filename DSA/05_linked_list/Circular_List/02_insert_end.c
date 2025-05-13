#include "list.h"

void insert_end(struct Node** head, int val)
{
    if(*head == NULL)
    {
        insert_origin(head, val);
    }
    else
    {
        struct Node* ptr = *head;
        
        while(ptr->next != *head)
            ptr = ptr->next;

        // create new node
        struct Node* node = (struct Node*) malloc (sizeof(struct Node));
        node->data = val;
        ptr->next = node;
        node->next = *head;
    }
}