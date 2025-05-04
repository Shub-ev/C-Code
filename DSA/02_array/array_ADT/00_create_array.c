#include "array_ADT.h"

void create_array(struct Array* arr)
{
    arr->array = (int*) malloc(sizeof(int) * 3);
    if(arr->array == NULL) 
    {
        printf("Error while allocating memory!\n");
        return;
    }
    arr->size = 3;
    arr->length = 0;
}