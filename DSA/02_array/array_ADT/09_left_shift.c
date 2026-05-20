#include "array_ADT.h"

void left_rotate(struct Array* arr) {
    if(arr == NULL || arr->length == 0) {
        printf("Array is empty!\n");
        return;
    }

    int first = arr->array[0];
    for(int i = 0; i < arr->length-1; i++) {
        arr->array[i] = arr->array[i+1];
    }
    arr->array[arr->length-1] = first;
    return;
}