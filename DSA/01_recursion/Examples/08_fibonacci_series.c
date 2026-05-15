#include <stdio.h>
#include <string.h>

int fib(int n)
{
    if(n <= 1) return n;

    return fib(n-1) + fib(n-2);
}

int fib_opt(int n, int* mem) {
    if(n <= 1) {
        mem[n] = n;
        return n;
    }

    if(mem[n] != -1) {
        return mem[n];
    }

    mem[n] = fib_opt(n-1, mem) + fib_opt(n-2, mem);
    return mem[n];
}

int main()
{
    // Normal fibonacci
    printf("Fibonacci: %d\n", fib(6));

    // Using memorization
    int mem[20];
    memset(mem, -1, sizeof(mem));
    printf("Fibonacci: %d\n", fib_opt(6, mem));
    return 0;
}