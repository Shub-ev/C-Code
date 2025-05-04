#include "array_ADT.h"

int main()
{
    struct Array* arr = (struct Array*)calloc(1, sizeof(struct Array));
    int n;

    do
    {
        printf("1. Display Array\n");
        printf("2. Append\n");
        printf("3. Insert\n");
        // printf("4. Display Array\n");
        // printf("5. Display Array\n");
        
        printf("Enter Choince : ");
        scanf("%d", &n);

        if(n == 1)
            display(arr);
        else if(n == 2)
        {
            int data;
            printf("Enter data to Append : ");
            scanf("%d", &data);
            append(arr, data);
        }
        else if(n == 3)
        {
            int data, index;
            printf("Enter data to Insert : ");
            scanf("%d", &data);
            printf("Enter Position : ");
            scanf("%d", &index);

            insert(arr, data, index);
        }
    }while(n != 98);
    return 0;
}