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

struct Node* search_rec(struct Node* node, int key)
{
    if(node == NULL) return NULL;
    else if(node->info == key) return node;

    return search_rec(node->next, key);
}