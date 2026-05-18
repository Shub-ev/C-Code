#include "array_ADT.h"

/*
 * This is simple linear search.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * 
 * There are ways to improve this linear search.
 * 1. Transposition: here we move key element to left by 1 position, so next time if
 *                   we search same element we can get it 1 position earlier (improve TC)
 * 2. Move to head: we move key to index 0, this way next time we search key we can get it
 *                  in O(1) time complexity.
*/
int linear_search(struct Array* arr, int key) {
    if(arr->length == 0) {
        printf("Array is empty nothing to search!\n");
        return -1;
    }

    for(int i = 0; i < arr->length; i++) {
        if(arr->array[i] == key) return i;
    }
    return -1;
}