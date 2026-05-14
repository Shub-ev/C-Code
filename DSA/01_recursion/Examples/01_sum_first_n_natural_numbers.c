#include<stdio.h>

int sum_n_natural_tail(int n){
    if(n > 0){
        return n + sum_n_natural_tail(n-1);  // tail recursion
    }

    return 0;
}

int sum_n_natural_head(int n){
    if(n > 0){
        return sum_n_natural_head(n-1) + n;  // head recursion
    }

    return 0;
}

int main()
{
    int n = 5;

    printf("%d\n", sum_n_natural_tail(n));
    printf("%d\n", sum_n_natural_head(n));

    return 0;
}