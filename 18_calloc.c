// calloc() is also used to allocate dynamic memory
// void* calloc( size_t num, size_t size );     // 2 parameters

// ***** main point about calloc is it initializes each block to 0

// returns void pointer, hence we need to cast to perticular object
// calloc() has more overhead than melloc()

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int*) calloc(5, sizeof(int));

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

    free(ptr);

    return 0;
}