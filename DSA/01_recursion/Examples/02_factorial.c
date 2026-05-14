#include<stdio.h>

int facto_tail(int n)
{
    if(n == 0) return 1;

    return n * facto_tail(n-1); // tail
}

int facto_head(int n)
{
    if(n == 0) return 1;

    return facto_head(n-1) * n;  // head
}

int main()
{
    int n = 6;
    
    printf("%d\n", facto_tail(n));
    printf("%d\n", facto_head(n));

    return 0;
}