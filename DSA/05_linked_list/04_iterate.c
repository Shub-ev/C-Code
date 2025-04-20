#include<stdio.h>
#include "01_list.h"

void traverse_iterative()
{
    if(head == NULL)
    {
        printf("Empty LinkedList!\n");
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

void traverse_recursive(struct Node* head)
{
    if(head == NULL)
    {
        printf("NULL");
        return;
    }

    printf("%d->", head->info);
    traverse_recursive(head->next);
}