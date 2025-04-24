#include "list.h"

void iterate(struct Node* head)
{
    if(head == NULL)
    {
        printf("Linked List is Empty!\n");
        return;
    }

    struct Node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d->", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL\n");
}