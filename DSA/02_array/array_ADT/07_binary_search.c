// iteration + recursion

#include "array_ADT.h"

/*
 * binary search using iteration
 * TC: O(log n)     // equivalent of height of search tree
 * SC: O(1)
*/
int binary_search(struct Array* arr, int key) {
    int low = 0;
    int high = arr->length-1;

    while (low < high) {
        int mid = low + ((high-low)/2);
        if(arr->array[mid] == key) return mid;
        else if(arr->array[mid] < key)
            low = mid + 1;
        else if(arr->array[mid] > key)
            high = mid - 1;
    }

    return -1;
}

/*
 * Binary search using recursion
 * Recursive binary search creates O(log n) recursive stack frames.
 * While it uses more memory than the iterative approach,
 * the recursion depth is small and stack overflow is generally not a concern.
 *
 * TC: O(log n)
 * SC: O(log n)
 */
// int recurr(struct Array*, int, int, int);

// int binary_search(struct Array* arr, int key) {
//     return recurr(arr, 0, arr->length-1, key);
// }

// int recurr (struct Array* arr, int low, int high, int key) {
//     if(arr == NULL || low > high) return -1;
    
//     int mid = low + (high-low)/2;

//     if(arr->array[mid] == key) return mid;
//     else if(arr->array[mid] < key)
//         return recurr(arr, mid + 1, high, key);
//     else if(arr->array[mid] > key)
//         return recurr(arr, low, mid - 1, key);
// }