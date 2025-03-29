#include<stdio.h>

// indirect recursion => 2 or more functions calling each other in recursive manner

void func2(int);
void func1(int);

void func1(int n){
    if(n > 0){
        printf("%d ", n);
        func2(n-1);
    }
}

void func2(int n){
    if(n > 0){
        printf("%d ", n);
        func1(n/2);
    }
}

int main()
{
    func1(8);
    return 0;
}