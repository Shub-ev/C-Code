#include "array_ADT.h"

void delete(struct Array* arr, int index)
{
    if(arr->length == 0)
    {
        printf("Array is empty!\n");
        return;
    }
    
    if(index >= arr->length || index < 0)
    {
        printf("Invalid position: Index is beyond array length!\n");
        return;
    }
    else {
        for(int i = index; i < arr->length - 1; i++) {
            arr->array[i] = arr->array[i+1];
        }
        arr->length--;
    }
}