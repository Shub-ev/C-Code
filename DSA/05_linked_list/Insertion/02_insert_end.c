#include "list.h"

void insert_end(struct Node** head, int val)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->next = NULL;

    if(*head == NULL) *head = node;
    else
    {
        struct Node* ptr = *head;
        while(ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = node;
    }
}