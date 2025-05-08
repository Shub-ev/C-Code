#include "list.h"

void count_nodes(struct Node* head)
{
    int count = 0;
    
    struct Node* ptr = head;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    printf("Count : %d", count);
    return;
}