// dot(.) operator is used to access direct members of user defined types (struct or union)
// Also known as the "direct member access operator"
// syntax => name.member;

// The dot (.) operator has the highest operator precedence in C Language
// and its associativity is from left to right.

#include <stdio.h>

union A
{
    int x;
    char c;
};

int main()
{
    union A a;

    // Accessing and updating x member of union
    a.x = 10;
    printf("%d\n", a.x);
    
    // Accessing and updating c member of union
    a.c = 'Z';
    printf("%c", a.c);

    return 0;
}