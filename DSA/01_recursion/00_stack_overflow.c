#include<stdio.h>

// with each function call a activation record/function frame is added to the stack
// if lots of function call are made then ""stack overflow error occurs""
void fun(int n){
    printf("%d\n", n);
    fun(++n);
}

int main(){
    fun(0);
}