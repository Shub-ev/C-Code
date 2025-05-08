#include "list.h"

void insert_loc(struct Node** head, int val, int loc)
{
    if(loc < 0)
    {
        printf("Enter valid position!\n");
        return;
    }
    else if(loc == 1)
    {
        insert_start(head, val);
        return;
    }
    else 
    {
        int pos = 1;
        loc--;
        struct Node* ptr = *head;

        // create new node to insert
        struct Node* node = (struct Node*) malloc(sizeof(struct Node));
        node->data = val;

        while(pos != loc && ptr != NULL)
        {
            ptr = ptr->next;
            pos++;
        }
        
        // check if ptr is null i.e. outof bound location
        if(ptr == NULL)
        {
            printf("Out of LinkedList size!\n");
        }

        node->next = ptr->next;
        ptr->next = node;
    }
}