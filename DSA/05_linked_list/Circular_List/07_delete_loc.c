#include "list.h"

// not working 

void delete_loc(struct Node** head, int loc)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else if(loc < 1)
    {
        printf("OutOfBound Index!\n");
        return;
    }
    else
    {
        struct Node* ptr = *head;
        int pos = 1;
        loc--;

        while(pos < loc && ptr != NULL)
        {
            ptr = ptr->next;
            ptr++;
        }
        
        if(ptr->next == *head || ptr == *head)
        {
            delete_origin(head);
        }
        else
        {
            struct Node* node = ptr->next;
            ptr->next = node->next;
            free(node);
        }
    }
}