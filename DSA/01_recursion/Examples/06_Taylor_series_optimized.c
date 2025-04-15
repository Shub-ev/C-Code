#include <stdio.h>

double taylor_series(int x, int n)
{
    static double p = 1, f = 1;

    if(n == 0) return 1;

    p = x * p;
    f = f * n;
    return taylor_series(x, n - 1) + (p / f);
}

int main()
{
    int x, n;
    printf("Enter value of x (e^x) : ");
    scanf("%d", &x);
    printf("Enter no. of terms : ");
    scanf("%d", &n);

    printf("Taylor Series : %lf\n", taylor_series(x, n - 1));

    return 0;
}
