#include "list.h"

struct Node* search(struct Node* node, int key)
{
    if(node == NULL)
    {
        printf("Linked List is Empty!");
    }
    else
    {
        while(node->next != NULL && node->info != key)
        {
            node = node->next;
        }

        if(node->info == key) return node;
    }
}