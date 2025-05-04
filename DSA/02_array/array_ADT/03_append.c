#include "array_ADT.h"

void append(struct Array* arr, int data)
{
    // if array is empty
    if(arr->array == NULL)
    {
        create_array(arr);
        arr->array[0] = data;
        arr->length++;
    }

    // if array if full and still we want to append
    else if(arr->length == arr->size)
    {
        increase_array(arr);

        // append value to new array
        arr->array[arr->length] = data;
        arr->length++;
    }

    // if array is not full and we want to append
    else
    {
        arr->array[arr->length] = data;
        arr->length++;
    }
}