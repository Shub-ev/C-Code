#include<stdio.h>

// functions and global vars have ****** external linkage ****** (i.e. these are available to the files which are part of program)
// global objects declared as static have ****** internal linkage ****** (i.e. these are available in the same file only)
// local vars have ****** no linkage ******

// to restrict the access of global variables to current file only we have to declare them static


// ****** To use extern we have to compile both files together and only 1 should have main() ******
int main(){
    extern int v; // this states a is declared in else where
    // (in other files and used by other files using external linkage or in same file afterwords)
    printf("%d", v);
    add(10, 20);
}