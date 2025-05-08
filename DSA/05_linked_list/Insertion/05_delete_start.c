#include "list.h"

void delete_start(struct Node** head)
{
    if(head == NULL || *head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }
    struct Node* node = *head;
    *head = node->next;
    free(node);
}