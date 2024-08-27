#include<stdio.h>

int main(){
    int a = 1234;   // simple integer literal
    printf("%d\n", a);

    int b = 0x80;  // this is a hex number (0x)
    printf("%d\n", b);

    int c = 0123; // octal (0o)
    printf("%d", c);
}