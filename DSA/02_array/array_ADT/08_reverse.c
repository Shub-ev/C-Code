#include "array_ADT.h"

void reverse(struct Array* arr) {
    if(arr == NULL || arr->length == 0) {
        printf("Array is empty!\n");
        return;
    }

    for(int i = 0, j = arr->length-1; i < j; i++, j--) {
        arr->array[i] = arr->array[i] + arr->array[j];
        arr->array[j] = arr->array[i] - arr->array[j];
        arr->array[i] = arr->array[i] - arr->array[j];
    }
    return;
}