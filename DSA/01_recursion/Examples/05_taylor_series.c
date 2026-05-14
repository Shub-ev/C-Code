// Taylor series
#include<stdio.h>
/*
 * Taylor Series:
 * e^x = 1 + x/1 + x^2/2! + x^3/3! ...... n terms.
 */

int facto(int);
int power(int b, int e);

/*
 * Taylor Series using recursion and static variables
 */
double taylor_series_static(int x, int n){
    static double pow = 1, facto = 1;
    double res;

    if(n == 0) return 1;

    res = taylor_series_static(x, n-1);
    pow = pow * x;
    facto = facto * n;
    return res + (pow/facto);
}
/*
 * Taylor Series using recursion and local variable
 */
double T_S(int x, int N) {
    if(N == 0)
        return 1;
    
    return ((double)power(x, N)/facto(N)) + T_S(x, N-1);
}
/*
 * Taylor Series using iteration
 */
double T_S_ite(int x, int N) {
    double pow = 1, facto = 1, result = 1;

    for (int i = 1; i <= N; i++) {
        pow *= x;
        facto *= i;
        result += (pow/facto);
    }

    return result;
}
/*
 * Taylor Series with recursion and static local variables
 */
double T_S_static(int x, int N) {
    static double pow = 1, facto = 1;
    double r;
    if(N == 0) return 1;
    else {
        r = T_S_static(x, N-1);
        pow *= x;
        facto *= N;
        return r + ((double)pow/facto);
    }
}

int main()
{
    int x, n;
    printf("Enter value of x (e^x) : ");
    scanf("%d", &x);
    printf("Enter no. of terms : ");
    scanf("%d", &n);

    // printf("%d ", power(3,3));

    printf("%lf\n", taylor_series_static(x, n));
    printf("%lf\n", T_S(x, n));
    printf("%lf\n", T_S_ite(x, n));
    printf("%lf\n", T_S_static(x, n));
    return 0;
}


// Using head recursion
int facto(int n) {
    if(n == 0)
        return 1;
    
    return facto(n - 1) * n;
}

int power(int b, int e) {
    if(e == 0)
        return 1;
    
    return power(b, e-1) * b;
}