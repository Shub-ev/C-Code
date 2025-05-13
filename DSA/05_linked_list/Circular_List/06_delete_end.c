#include "list.h"

void delete_end(struct Node** head)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else
    {
        struct Node* ptr = *head;
        while(ptr->next->next != *head)
            ptr = ptr->next;

        struct Node* temp = ptr->next;
        if(((*head)->next) == *head)
        {
            *head = NULL;
        }
        else
        {
            ptr->next = ptr->next->next;
        }
        free(temp);
    }
}