#include "list.h"

void sum(struct Node* head)
{
    if(head == NULL)
    {
        printf("Linked List is Empty!\n");
        return;
    }
    
    int sum = 0;

    struct Node* ptr = head;
    while(ptr != NULL)
    {
        sum+= ptr->info;
        ptr = ptr->next;
    }

    printf("Sum : %d\n", sum);
    return;
}