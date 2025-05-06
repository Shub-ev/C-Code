#include "list.h"

int main()
{
    int n;

    do
    {
        printf("\nEnter option: \n");
        printf("1. Enter New Element.\n");
        printf("2. Count Nodes.\n");
        printf("3. Print Linked List Iterative.\n");
        printf("4. Sum.\n");
        printf("5. Max Node.\n");
        printf("6. Search.\n");
        printf("7. Exit.\n");
        printf("=> ");
        scanf("%d", &n);

        if (n == 1)
            insert_node();
        else if (n == 2)
            count_nodes(head);
        else if (n == 3)
            iterate(head);
        else if (n == 4)
            sum(head);
        else if (n == 5)
        {
            int max =  max_node(head);
            if(max == INT_MAX)
                printf("Linked List is Empty!\n");
            else
                printf("Max Element is : %d", max);
        }
        else if(n == 6)
        {
            printf("Enter element to Search: ");
            scanf("%d", &n);

            struct Node* node = search(head, n);
            printf("Data Found : %d\n", node->info);
        }

    } while (n != 7);
}