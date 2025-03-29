#include<stdio.h>

// nested recursion => function call as parameter while recusive call

int func(int n)
{
    if(n > 100)
        return n-10;
    else{
        func(func(n+11)); // recursive call as parameter to outer recursive call
    }
}

int main()
{
    printf("%d", func(30));
    return 0;
}