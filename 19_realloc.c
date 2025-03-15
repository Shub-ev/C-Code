// void *realloc( void *ptr, size_t new_size );
// realloc() is used to dynamically increase or decrease the size of dynamically allocated 


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int*) calloc(5, sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation Failed!");
        return 1;
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr + i));      // prints 5 0's
    }
    printf("\n");

    // now if we want to increase the block of ptr we use realloc
    // realloc() returns null if it fails to modify the block
    // if null is assigned to ptr then there will be no ptr to block and it will be memory leak
    // hence use temp ptr

    int *temp = (int *)realloc(ptr, sizeof(int) * 4);
    ptr = temp;

    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr + i));      // prints 4 0's
    }

    free(ptr);

    return 0;
}