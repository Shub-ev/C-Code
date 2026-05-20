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
        printf("5. Search Linear\n");
        printf("6. Search Binary\n");
        printf("7. Reverse Array\n");
        printf("8. Left Rotate\n");
        
        printf("Enter Choince : ");
        scanf("%d", &n);

        int data, index, res;

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
            case 5:
                printf("Enter element to search: ");
                scanf("%d", &data);
                res = linear_search(arr, data);
                if(res == -1) printf("Element not found!\n");
                else printf("Element present at index: %d\n", res);
                break;
            case 6:
                printf("Enter element to search: ");
                scanf("%d", &data);
                res = binary_search(arr, data);
                if(res == -1) printf("Element not found!\n");
                else printf("Element present at index: %d\n", res);
                break;
            case 7:
                reverse(arr);
                printf("Array reversed!\n");
                break;
            case 8:
                left_rotate(arr);
                printf("Left shifted!\n");
                break;
        }
    }while(n != 98);
    return 0;
}