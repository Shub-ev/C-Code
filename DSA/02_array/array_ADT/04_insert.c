#include "array_ADT.h"

void insert(struct Array* arr, int data, int index)
{
    printf("\nLength : %d\n\n", arr->length);
    // if array is empty create one
    if(arr->array == NULL || arr->length == 0)
    {
        create_array(arr);
    }

    if(index > arr->length || index < 1)
    {
        printf("Invalid position: Expected to be non-zero positive number!\n");
        return;
    }
    else
    {
        index = index - 1;
        if(arr->size != arr->length)
        {
            for(int i = arr->length; i > index; i--)
            {
                arr->array[i] = arr->array[i-1];
            }
            arr->array[index] = data;
            arr->length++;
        }
        else
        {
            increase_array(arr);
            for(int i = arr->length; i > index; i--)
            {
                arr->array[i] = arr->array[i-1];
            }
            arr->array[index] = data;
            arr->length++;
        }
    }
}