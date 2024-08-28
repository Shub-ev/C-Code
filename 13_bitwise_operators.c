#include<stdio.h>
// bitwise operators are used to play with bits (perform operations on data at bit level)
// bitwise operators cannot be applied on 1.float 2.double 3.long double 4.bool 5.void and other more complex

// ***** Bitwise Operators *****
// A.  &   AND
// B.  |   OR
// C.  ^   XOR (exclusive or)
// D.  ~   NOT
// E.  <<  Left Shift
// F.  >>  Right Shift

int main(){
    printf("%d\n", (0b1001 & 0b1000)); // bitwise AND operation i.e. 9 & 8 => 8

    printf("%d\n", (0b1001 | 0b1000)); // bitwise OR operation i.e. 9 | 8 => 9

    printf("%d\n", (0b1001 ^ 0b1000)); // XOR operation i.e. 9 ^ 8 => 1

    printf("%d\n", (~0b1010));  // NOT operation i.e. ~10 => -11

    printf("%d\n", (0b1001 >> 2));  // Left Shift, Shifts 2 bits to left (padding by 0) i.e. 9>>2  => 1001 >> 2 => 0010 => 2

    printf("%d\n", (0b1001 << 2));  // Right Shift, Shifts 2 bits to Right (padding by 0) i.e. 9>>2  => 0001001 >> 2 =>  0100100 => 36
}