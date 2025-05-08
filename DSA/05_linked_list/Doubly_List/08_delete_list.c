#include "list.h"

void delete_list(struct Node** head)
{
    while(*head)
    {
        struct Node* temp = *head;
        *head = (*head)->next;
        if(*head != NULL)
            (*head)->prev = NULL;

        free(temp);
    }
    *head = NULL;
}