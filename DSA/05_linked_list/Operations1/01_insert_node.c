#include "list.h"

struct Node* head; // here is declaration for global head

void insert_node()
{
    printf("Enter Data : ");
    int data;
    scanf("%d", &data);

    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->info = data;
    node->next = NULL;

    if(head == NULL)
    {
        head = node;
        return;
    }

    struct Node* ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = node;
    return;
}