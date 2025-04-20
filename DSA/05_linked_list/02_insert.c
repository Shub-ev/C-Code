#include <stdio.h>
#include <stdlib.h>
#include "01_list.h"

struct Node* head;  // here we declare head for all other global files

void insert_node()
{
    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    if(head == NULL)
    {
        head = (struct Node*) malloc(sizeof(struct Node));
        head->info = data;
        head->next = NULL;
        return;
    }

    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->info = data;
    node->next = NULL;

    struct Node* ptr = head;
    while(ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = node;
}