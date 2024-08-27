// variable is named memory loc. where data is stored
// variable initialization -> data_type name = value;

#include<stdio.h>
int a = 20;  // Define the global variable 'a'

int main(){
    const int a = 10;  // Local constant variable within this scope
    // int a = 10;        // Local variable within this block only

    char* str = "This is a string";
    printf("%c", str[5]);
    // str[1] = '4';  // modifying string literal which is stored in ROM hence error
}
