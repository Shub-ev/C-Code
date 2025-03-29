#include<stdio.h>

// tree recusion => if recusive call is more than 1 times then

int tree(int n)
{
    if(n > 0){
        printf("%d ", n);
        tree(n-1);
        tree(n-1);
    }

    return 0;
}

int main()
{
    tree(3);
    return 0;
}