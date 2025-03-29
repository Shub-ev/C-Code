#include<stdio.h>

// tail recursion => if recursive call is at the end of all processing instructions
void desc(int n){
    if(n > 0){
        printf("%d ", n);

        // call self after process instructions
        desc(n-1);      // this is tail recursion
    }
    return;
}

int main()
{
    desc(6);
    return 0;
}