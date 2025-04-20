// Linkedlist
#include <stdio.h>
#include "01_list.h"

// Arrays have fixed size & we cannot modify/update the size => int arr[10];   // this have fixed size of 10
// During actual execution we may require more than this   or   we will very small of it
// So using array could be waste of memory for some use cases

// hence we want some data structure which will grow and shrink as per need
// LinkedList is one of the solutions.

// Linked list is created over *** Heap *** (obviously because linked list is Dynamic)
// LinkedList consists of *** Nodes ***

// as yeach node is create at heap hence address of each node is non-consecutive (unlike array)
// but nodes are connected linearly hence it is a *** Linear Data Structure ***

int main()
{
    int n;

    do
    {
        printf("\nEnter option: \n");
        printf("1. Enter New Element.\n");
        printf("2. Delete Element.\n");
        printf("3. Print Linked List Iterative.\n");
        printf("4. Print Linked List Recursive.\n");
        printf("5. Exit.\n");
        printf("=> ");
        scanf("%d", &n);

        if (n == 1)
            insert_node();
        else if (n == 2)
            delete_node();
        else if (n == 3)
            traverse_iterative();
        else if (n == 4)
            traverse_recursive(head);

    } while (n != 5);
}