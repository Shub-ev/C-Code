#include "list.h"

void insert_origin(struct Node** head, int val)
{
    struct Node* node = (struct Node*) mallco (sizeof(struct Node));
    node->data = val;

    if(*head == NULL)
    {
        *head = node;
        (*head)->next = *head;
    }
    else
    {
        struct Node* ptr = *head;
        
        while(ptr->next != head)
            ptr = ptr->next;

        node->next = head;
        ptr->next = node;
        *head = node;
    }
}