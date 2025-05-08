#include "list.h"

void delete_end(struct Node** head)
{
    if(head == NULL || *head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }
    else if((*head)->next == NULL)
    {
        struct Node* ptr = *head;
        *head = NULL;
        free(ptr);
        return;
    }
    else
    {
        struct Node* ptr = *head;
        while(ptr->next->next != NULL)
            ptr = ptr->next;

        struct Node* node = ptr->next;
        ptr->next = NULL;

        free(node);
    }
}