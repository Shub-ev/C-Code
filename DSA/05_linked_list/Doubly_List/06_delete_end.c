#include "list.h"

void delete_end(struct Node** head)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else if((*head)->next == NULL) 
    {
        delete_start(head);
    }
    else
    {
        // create iterator
        struct Node* ptr = *head;

        while(ptr->next->next != NULL)
            ptr = ptr->next;
        
        struct Node* temp = ptr->next;
        ptr->next = temp->prev = NULL;

        free(temp);
    }
}