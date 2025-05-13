#include "list.h"

void delete_origin(struct Node** head)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else
    {
        // iterator
        struct Node* ptr = *head;
        // take ref of head node 
        struct Node* temp = *head;

        // iterate till tail node
        while(ptr->next != *head)
            ptr = ptr->next;

        if((*head)->next == *head)
        {
            *head = NULL;
        }
        else
        {
            ptr->next = (*head)->next;
            *head = (*head)->next;
        }

        free(temp);
    }
}