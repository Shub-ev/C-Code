#include <stdio.h>

double taylor(int x, int n) {
    static double s = 1;
    if(n == 0) return s;

    s = 1 + (double)(x*s/n);

    return taylor(x, n-1);
}

int main() {
    int x = 2;
    int n = 10;

    printf("Result: %lf\n", taylor(x, n));

    return 0;
}