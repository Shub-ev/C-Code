#include "list.h"

void delete_loc(struct Node** head, int loc)
{
    if(loc < 1)
    {
        printf("OutOfBound index!\n");
        return;
    }
    else if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else if(loc == 1)
    {
        delete_start(head);
        return;
    }
    else
    {
        int pos = 1;

        // declare iterator
        struct Node* ptr = *head;
        while(ptr != NULL && pos < loc)
        {
            ptr = ptr->next;
            pos++;
        }
        
        if(ptr == NULL)
        {
            printf("OutOfBound index!\n");
            return;
        }
        else if(ptr->next == NULL)
        {
            delete_end(head);
        }
        else
        {
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;

            free(ptr);
        }
    }
}