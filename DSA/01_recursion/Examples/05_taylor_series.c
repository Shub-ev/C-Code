// Taylor series
#include<stdio.h>

int facto(int n)
{
    if(n ==0) return 1;
    return n * facto(n - 1);
}

int power(int x, int p)
{
    if(p == 0) return 1;

    if(p%2 == 0)
    {
        return power(x*x, p/2);
    }
    else
    {
        return x * power(x*x, p/2);
    }
}

int taylor_serise(int x, int n)
{
    if(n == 0) return 1;

    return power(x, n)/facto(n) + taylor_serise(x, n-1);
}

int main()
{
    int x, n;
    printf("Enter value of x (e^x) : ");
    scanf("%d", &x);
    printf("Enter no. of terms : ");
    scanf("%d", &n);

    printf("Taylor Series : %d", taylor_serise(x, n));
    return 0;
}