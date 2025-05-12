#include "list.h"

void display(struct Node* head)
{
    if(head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    // this is dumb approach to make ptr->next and the iterate
    struct Node* ptr = head;

    // printf("%d->", ptr->data);
    // ptr = ptr->next;    

    // while(ptr != head)
    // {
    //     printf("%d->", ptr->data);
    //     ptr = ptr->next;
    // }
    // printf("NULL\n");


    // instead we can use do-while loop
    do
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    } while(ptr!=head);

    printf("NULL\n");
}