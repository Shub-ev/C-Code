#include<stdio.h>
static unsigned int a = 0; // this is static global declaration
// even this is global var but due to static var it is accessible in local only

int series(){
    // static unsigned int b = 0;
    // b = b + 5;
    // return b;
    // this is static local declaration this sustains actual value of var in between calls
    // static local variables have same storage as global but can be accessed locally only 
    a = a+5;
    return a;
}

void main(){
    printf("%d\n", series());
    printf("%d\n", series());
    printf("%d\n", series());
    printf("%d\n", a);

    printf("%d\n", a); // not possible as even b has global like storage but it is known only to that specific block
}