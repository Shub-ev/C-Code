#include<stdio.h>

// linear recursion => if there are process instructions before and after recursive call

int rec(int n)
{
    if(n > 0){
        // some process instructions
        rec(n-1);
        // some other process instructions
    }
    return 0;
}

int main()
{

    return 0;
}