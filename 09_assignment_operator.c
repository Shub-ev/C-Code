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
    


    // ***** type conversion ***** 
    // in assgnment value of left = is converted to the type of right

    // int -> char  (here we represent 8 less significant bits to represent char)
    char c;
    c = 65; 
    printf("%c\n", c);

    // float -> int
    float f = 1021.123;
    int i = f; // here integer part of float is stored in int type var
    printf("%d\n", i);

    // float -> char
    char g = 65.124532; // 8 least significant bits are stored in char
    printf("%c\n", g);

    // char -> float 
    float f1 = 'A'; // converts char into floating point
    printf("%f\n", f1);
    // while converting from higer sized data types to lower (it reduces appropriate higher order bits);



    // ***** multiple assignment ***** 
    int x, y, z;
    x = y = z = 10; // assigning single number to 3 vars;
    printf("%d %d %d", x,y,z);


    // ***** compound/shorthand assignment ***** 
    int i = 10;
    i += 10;  // -> same as         i = i + 10;
    i -= 10;  // -> same as         i = i - 10;

    // and many more
}