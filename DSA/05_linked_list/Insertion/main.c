#include "list.h"

int main()
{
    int n;
    struct Node* head = NULL;

    do
    {
        printf("1. Insert at Head.\n");
        printf("2. Insert at Tail.\n");
        printf("3. Insert at Location.\n");
        printf("4. Display.\n");
        printf("Enter any option.\n");
        scanf("%d", &n);

        // variable for data
        int data;

        if (n == 1)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            insert_start(&head, data);
        }
        else if(n == 2)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            insert_end(&head, data);
        }
        else if(n == 3)
        {
            int loc;
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter location: ");
            scanf("%d", &loc);
            insert_loc(&head, data, loc);
        }
        else if(n == 4)
        {
            display(head);
        }
    } while (n != 5);
    return 0;
}
