#include<stdio.h>

int power_tail(int b, int p)
{
    if(p == 0) return 1;
    
    return b * power_tail(b, p-1);
}

int power_head(int b, int p)
{
    if(p == 0) return 1;
    
    return power_tail(b, p-1) * b;
}

int main()
{
    int b, p;
    printf("Base : ");
    scanf("%d", &b);
    printf("Power : ");
    scanf("%d", &p);

    printf("%d\n", power_tail(b,p));
    printf("%d\n", power_head(b,p));

    return 0;
}