#include "list.h"

void display(struct Node* head)
{
    while(head->next != head)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("%d->NULL\n", head->data);
}