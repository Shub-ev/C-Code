#include "list.h"

void insert_start(struct Node** head, int val)
{
    struct Node* node = (struct Node*) malloc (sizeof(struct Node));
    node->data = val;

    if(*head == NULL)
    {
        *head = node;
        node->next = node->prev = NULL;
        return;
    }
    else
    {
        node->next = *head;
        (*head)->prev = node;
        (*head) = node;
        return;
    }
}