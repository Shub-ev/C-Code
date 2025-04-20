// Linkedlist
#include<stdio.h>
#include<stdlib.h>

// Arrays have fixed size & we cannot modify/update the size => int arr[10];   // this have fixed size of 10
// During actual execution we may require more than this   or   we will very small of it
// So using array could be waste of memory for some use cases

// hence we want some data structure which will grow and shrink as per need
// LinkedList is one of the solutions.

// Linked list is created over *** Heap *** (obviously because linked list is Dynamic)
// LinkedList consists of *** Nodes ***
// Each node consists of 2 fields 
// 1. Data field (which will hold the data accoding to the type of linkedlist)
// 2. Address field (which holds address of next/previous node)


// as yeach node is create at heap hence address of each node is non-consecutive (unlike array)
// but nodes are connected linearly hence it is a *** Linear Data Structure ***

// This is a *** self-referential *** structure (it contains a pointer to the same type of structure).
struct Node
{
    int dataf;
    struct Node* next;
};

struct Node* head;

struct Node* insert_node()
{
    int data;
    printf("Enter Data: ");
    scanf("%d", &data);

    if(head == NULL)
    {
        head = (struct Node*)malloc(sizeof(struct Node));
        head->dataf = data;
        printf("Data added successfully!\n");
        return head;
    }

    struct Node node;
    node.dataf = data;

    struct Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    
    ptr->next = &node;

    printf("Data added successfully!\n");
    return head;
}

int main()
{
    int n;

    do
    {
        printf("Enter option: \n");
        printf("1. Enter New Element. \n");
        printf("2. Delete Element.\n");
        printf("3. Exit.\n");
        printf("=> ");

        scanf("%d", &n);
        if(n == 1) insert_node();

    } while (n != 3);
    
}