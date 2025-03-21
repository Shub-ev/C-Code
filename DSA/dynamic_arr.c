#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of new array : ");
    scanf("%d", &n);
    int* arr = (int*) calloc(n, sizeof(int));
}