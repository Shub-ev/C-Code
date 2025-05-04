// display method for Array struct
#include "array_ADT.h"

void display(struct Array* arr)
{
    if(arr->length == 0 || arr->array == NULL)
    {
        printf("Array is Empty!\n");
    }
    else
    {
        printf("{");
        for(int i = 0; i < arr->length; i++)
        {
            if(i == arr->length-1)
            {
                printf("%d", arr->array[i]);
                break;
            }

            printf("%d,", arr->array[i]);
        }
        printf("}\n");
    }
}