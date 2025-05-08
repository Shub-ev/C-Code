#include "list.h"

void display(struct Node* head)
{
    if(head == NULL)
    {
        printf("Linked List is Empty!\n");
        return;
    }
    else
    {
        while(head != NULL)
        {
            printf("%d->", head->data);
            head = head->next;
        }
        printf("Null\n");
    }
}