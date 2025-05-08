#include "list.h"

void delete_loc(struct Node** head, int loc)
{
    if(loc < 1)
    {
        printf("Enter valid location!\n");
        return;
    }
    else if(loc == 1)
    {
        delete_start(head);
        return;
    }
    else
    {
        struct Node* ptr = *head;

        loc--;
        int pos = 1;

        while(pos != loc && ptr != NULL)
        {
            ptr = ptr->next;
            pos++;
        }

        if(ptr == NULL || (pos == loc && ptr->next == NULL))
        {
            printf("Out of bound location!\n");
            return;
        }
        if(ptr->next == NULL)
        {
            delete_end(head);
            return;
        }
        else
        {
            struct Node* temp = ptr->next;
            ptr->next = ptr->next->next;
            free(temp);
            return;
        }
    }
}