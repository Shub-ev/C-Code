#include "list.h"

void insert_loc(struct Node** head, int val, int loc)
{
    if(*head == NULL || loc == 1)
    {
        insert_origin(head, val);
    }
    else if(loc < 1)
    {
        printf("OutOfBound index!\n");
        return;
    }
    else
    {
        struct Node* ptr = *head;
        int pos = 1;
        loc--;

        while(pos != loc)
        {
            ptr = ptr->next;
            pos++;
        }

        struct Node* node = (struct Node*) malloc (sizeof(struct Node));
        node->data = val;
        node->next = ptr->next;
        ptr->next = node;
    }
}