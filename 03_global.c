#include<stdio.h>

// here we will declare global variables and functions
// this is a gobal variable which have external linkage
int v = 10;

// this is function having external linkage (all functions have external linkage)
int add(int a, int b){
    printf("A + B : ", (a+b));
    return a + b;
}