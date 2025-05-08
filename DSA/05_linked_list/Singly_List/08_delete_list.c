#include "list.h"

void delete_list(struct Node** head)
{
    while(*head)
    {
        struct Node* ptr = *head;
        (*head) = (*head)->next;
        free(ptr);
    }
}