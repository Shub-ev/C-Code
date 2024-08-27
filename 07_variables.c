// variable is named memory loc. where data is stored
// variable initialization -> data_type name = value;

#include<stdio.h>
int a = 20;  // Define the global variable 'a'

int main(){

    // ***** CONST *****
    const int a = 10;  // Local constant variable within this scope
    // int a = 10;        // Local variable within this block only

    char* str = "This is a string";
    printf("%c\n", str[5]);
    // str[1] = '4';  // modifying string literal which is stored in ROM hence error



    // ***** Date Types *****
    int b = 1234;   // simple integer literal
    printf("%d\n", b);

    int c = 123456L;
    printf("%d\n", c);

    int d = -1234U;
    printf("%d\n", d);

    // ***** string constants *****
    // 'a' != "a" 
    // string literals are immutable as seen above


    // ***** backslash character constants (escape sequence) *****
    // as few characters we cannot write in string (ex. tab) we use this
    // ex: 1. \n  2. \t    and so on
}
