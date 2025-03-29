#include<stdio.h>

// global is also only one for all stack frames
static int x;  // used static to avoid enternal linkage (default to 0)

int rec(int n){
    if(n > 0){
        x++;
        printf("%d\n", rec(n-1) + x);
    }
    return 0;
}

int main()
{
    rec(5);
    return 0;
}