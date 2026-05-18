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
        printf("4. Remove\n");
        // printf("5. Display Array\n");
        
        printf("Enter Choince : ");
        scanf("%d", &n);

        int data, index;

        switch(n) {
            case 1:
                display(arr);
                break;
            case 2:
                printf("Enter data to Append : ");
                scanf("%d", &data);
                append(arr, data);
                break;
            case 3:
                printf("Enter data to Insert : ");
                scanf("%d", &data);
                printf("Enter Position : ");
                scanf("%d", &index);
                insert(arr, data, index);
                break;
            case 4:
                printf("Enter index: ");
                scanf("%d", &index);
                delete(arr, index);
                break;
        }
    }while(n != 98);
    return 0;
}