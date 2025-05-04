#include "array_ADT.h"

void increase_array(struct Array* arr)
{
    // increase the size of currect array
    int new_size = (int)(arr->size * 1.5);

    int* temp_ptr = (int*)malloc(sizeof(int) * new_size);

    if(temp_ptr == NULL)
    {
        printf("Error while allocating memory!\n");
        return;
    }

    arr->size = new_size;
    for(int i = 0; i < arr->length; i++)
    {
        temp_ptr[i] = arr->array[i];
    }

    free(arr->array);
    arr->array = temp_ptr;
    temp_ptr = NULL;
}