#include<stdio.h>

// optimized power of 

int power(int b, int n)
{
    if(n == 0) return 1;

    if(n%2==0){
        return power(b*b, n/2);
    }
    else{
        return b * power(b*b, n/2);
    }
}

int main()
{
    int b, p;
    printf("Base : ");
    scanf("%d", &b);
    printf("Power : ");
    scanf("%d", &p);

    printf("%d\n", power(b,p));

    return 0;
}