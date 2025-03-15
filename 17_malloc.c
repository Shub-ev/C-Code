// malloc -> memory allocator
// void *malloc( size_t size );


// malloc() is function under stdlib.h
// it helps to allocate dynamic memory

// there are 4 such methods for dynamic memory processes
// 1. malloc()
// 2. calloc()
// 3. free()
// 4. realloc()

// malloc is thread-safe: it behaves as though only accessing the memory locations 
// visible through its argument, and not any static storage.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // malloc takes 1 parameter i.e. size(bytes) we want to allocate
    // return pointer to that block
    // if fails(size is 0) return NULL

    int * ptr = (int *) malloc(sizeof(int) * 5);    // memory block of 5 * 4 = 20 bytes
    // by default all memory locations hold garbage values

    // check if memory is allocated
    if(ptr != NULL){
        for(int i = 0; i < 5; i++){
            *(ptr+i) = i * i;
        }
        for(int i = 0; i < 5; i++){
            printf("%d\n", *(ptr + i));
        }
    }
    else{
        printf("Error in memory allocation!");
    }


    // free created memory block
    free(ptr);

    return 0;
}
