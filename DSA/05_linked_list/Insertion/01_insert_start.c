#include "list.h"

void insert_start(struct Node** head, int val)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if(node == NULL)
    {
        printf("Memmory Not Allocated!");
        return;
    }
    node->data = val;
    node->next = *head;
    *head = node;
}