// ******  Other Operators  ******
// 1. ? (Ternary Operator)
// 2. & ()
// 3. * (Pointer Operator) (pointer variables holds memory address of a var)

// syntax =>    Exp1 ? Exp2 : Exp3

// if Exp1 evaluates to true then value of Exp2 after evaluation will be result of statement
// else if Exp1 evaluates to false then value of Exp3 after evaluation will be result of statement

#include<stdio.h>
int main(){
    // 1. ? (Ternary Operator)
    printf("%s", (10 < 5 ? "True" : "False"));
    return 0;

    // 2. & (pointer operator)
    // gets the address of the variable
    int a = 10;
    int *b = &a;     // & gets the address of the operand (a)
    printf("%d\n",b);
    
    // 3. * (pointer operator) // this helps to 1.Fast reference in array elements 2. 
}