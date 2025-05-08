#include "list.h"

void insert_loc(struct Node** head, int val, int loc)
{
    if(loc < 1) printf("Enter valid location!\n");
    else if(*head == NULL || loc == 1)
    {
        insert_start(head, val);
        return;
    }
    else
    {
        // create node
        struct Node* node = (struct Node*) malloc (sizeof(struct Node*));
        node->data = val;

        // iterator
        struct Node* ptr = *head;
        int pos = 1;
        loc--;

        while(ptr != NULL && pos < loc)
        {
            ptr = ptr->next;
            pos++;
        }

        if(ptr == NULL)
        {
            printf("OutOfBound Index!\n");
            return;
        }
        else if(ptr->next == NULL)
        {
            insert_end(head, val);
        }
        else
        {
            node->next = ptr->next;
            ptr->next->prev = node;
            node->prev = ptr;
            ptr->next = node;
        }
    }
}