// ******  Other Operators  ******
// 1. ? (Ternary Operator)
// 2. & ()
// 3. * (Pointer Operator) (pointer variables holds memory address of a var)
// 4. . (dot) used to access individual elements of structures or enums when working directly
// 5. -> (arrow) used to access individual elements of structures or enums when working with their pointer

// syntax =>    Exp1 ? Exp2 : Exp3

// if Exp1 evaluates to true then value of Exp2 after evaluation will be result of statement
// else if Exp1 evaluates to false then value of Exp3 after evaluation will be result of statement

struct Student{
    char name[20];
    int age;
} stu;

#include<stdio.h>
int main(){
    // 1. ? (Ternary Operator)
    printf("%s", (10 < 5 ? "True\n" : "False\n"));


    
    // 2. * (pointer operator) // this helps to 1.Fast reference in array elements 2. Modify function parameters 3. support Linked list and other DSs
    // A. & is Unary operator used access the memory location of operand
    // B. * is used to declare pointer variable of specific type
    int a = 10;
    int *c = &a; // here mem. loc. of a is stored in pointer var of type int c
    printf("%p\n", c);
    printf("%d\n", *c);


    // . (dot) operator
    struct Student s1 = {"Shubham", 20}; // creating a struct variable
    s1.age = 21;  // accessing members of struct using . (dot) operator
    printf("%d\n", s1.age);

    // -> (arrow) operator
    struct Student *ptr = &s1;
    printf("%d", ptr->age); // accessing members of struct using -> (arrow) operator
}