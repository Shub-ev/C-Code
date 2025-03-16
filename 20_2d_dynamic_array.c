// dynamic array using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(){
    // 1. array of pointers
    int r = 3, c = 4;
    int** arr = (int**) malloc(sizeof(int *) * r);
    if (arr == NULL) {
        printf("Memory allocation failed for rows!\n");
        return 1;  // Exit if allocation fails
    }
    
    for(int i = 0; i < r; i++){
        arr[i] = (int*) calloc(c, sizeof(int));
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    // free each sub array
    for(int i = 0; i < r; i++){
        free(arr[i]);
    }
    // free array of pointers
    free(arr);


    // 2. pointer arithmatic
    int* ptr = (int *) calloc(r+c, sizeof(int));
    int ct = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", ptr[ct]);
            ct++;
        }

        printf("\n");
    }
}