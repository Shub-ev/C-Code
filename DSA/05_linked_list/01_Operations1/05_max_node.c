#include "list.h"

int max_node(struct Node* head)
{
    if(head == NULL)
    {
        return INT_MIN;
    }

    int max =  max_node(head->next);

    return (head->info > max) ? head->info : max;
}