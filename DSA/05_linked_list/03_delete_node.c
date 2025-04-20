#include "01_list.h"
#include<stdio.h>
#include<stdlib.h>

#define NO_DATA() do{ printf("No data present!"); return; }while(0)

void delete_node()
{
    if(head == NULL){
        NO_DATA();
    }
    
    printf("Enter Data to Delete : ");
    int d;
    scanf("%d", &d);

    // Case 1: Deleting the head node
    if (head->info == d) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        printf("Data Deleted!\n");
        return;
    }


    // Case 2: Searching for the node in the rest of the list
    struct Node* ptr = head;
    while(ptr->next != NULL && ptr->next->info != d)
    {
        ptr = ptr->next;
    }

    if(ptr->next == NULL)
    {
        NO_DATA();
    }
    else
    {
        struct Node* node = ptr->next;
        ptr->next = node->next;

        free(node);
    }

    printf("Data Deleted!");
}