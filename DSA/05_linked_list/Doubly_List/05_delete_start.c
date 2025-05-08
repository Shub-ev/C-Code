#include "list.h"

void delete_start(struct Node** head)
{
    if(*head == NULL)
    {
        printf("Linked list is empty!\n");
        return;
    }
    else
    {
        struct Node* ptr = *head;
        *head = ptr->next;

        if(*head == NULL)
        {
            free(ptr);
            return;
        }

        (*head)->prev = NULL;
        ptr->next = NULL;

        free(ptr);
    }
}