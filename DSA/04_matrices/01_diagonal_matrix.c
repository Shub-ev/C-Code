// diagonal matrix
// Diagonal Matrix:
//    - A square matrix with all non-diagonal elements = 0.
//    Example:
//    [4 0 0]
//    [0 7 0]
//    [0 0 9]

#include<stdio.h>
#define SIZE 100

int arr[100];
int n;

int main()
{
    printf("Enter the size of Array : ");
    scanf("%d", &n);


    printf("Enter Elements of Digonal (top -> bottom) : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j) printf("%d ", arr[i]);
            else printf("%d ", 0);
        }
        printf("\n");
    }
}