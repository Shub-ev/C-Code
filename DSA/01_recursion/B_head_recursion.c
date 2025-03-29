#include<stdio.h>

// head recusion => if function call occurs before process instructions
void asc(int n)
{
    if(n > 0){
        asc(n-1);   // head recursion
        printf("%d ", n);  
    }
}

int main()
{
    asc(6);
    return 0;
}