#include <stdio.h>

/*
 * nCr is a way to find combinations.
 * nCr = n! / r! (n - r)!
 */

int facto(int);

double ncr(int n, int r) {
    return (double)facto(n)/(facto(r)*facto(n-r));
}


// optimal ncr using 
/*
 * Pascal's Triangle
 *
 * Every value is obtained using:
 *
 *      nCr = (n-1 C r-1) + (n-1 C r)
 *
 * Triangle:
 *
 *                 1                        -> 0C0
 *
 *              1     1                    -> 1C0 1C1
 *
 *           1     2     1                 -> 2C0 2C1 2C2
 *
 *        1     3     3     1              -> 3C0 3C1 3C2 3C3
 *
 *     1     4     6     4     1           -> 4C0 4C1 4C2 4C3 4C4
 *
 *  1     5    10    10     5     1        -> 5C0 5C1 5C2 5C3 5C4 5C5
 *
 *
 * Example:
 *
 *      5C2 = 10
 *
 * Using Pascal's Identity:
 *
 *      5C2 = 4C1 + 4C2
 *
 *           = 4 + 6
 *
 *           = 10
 *
 * Each number is sum of:
 *      upper-left + upper-right
 */
double ncr_opt(int n, int r) {
    if(n == r || r == 0) return 1;

    return ncr_opt(n-1, r-1) + ncr_opt(n-1, r);
}

int main() {
    int n = 5;
    int r = 3;

    printf("nCr: %lf\n", ncr(n, r));
    printf("nCr (optimal): %lf", ncr(n, r));
}

int facto(int n) {
    if(n <= 1) return 1;

    return facto(n-1) * n;
}