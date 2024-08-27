#include<stdio.h>
// ***** operators *****
// four main classes 
// 1. Arithmatic
// 2. Relational
// 3. Logical
// 4. Bitwise

// 5. other

int main(){
    // ***** assignment operators *****
    int a;
    a = 20;
    // l side is variable and r side is expression (alwasy should be same)
    // lvalue -> any object that occurs on left side of = 
    // rvalue -> expression on right side 
    // left part should be always variable or pointer not function or constant
    

    // type change 
    // in assgnment type of left of = is converted to the type of right
    a = 'c'; // int -> char  (here we represent 8 less significant bits to represent char)
    printf("%c", a);
}