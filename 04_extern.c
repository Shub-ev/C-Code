#include<stdio.h>

// functions and global vars have ****** external linkage ****** (i.e. these are available to the files which are part of program)
// global objects declared as static have ****** internal linkage ****** (i.e. these are available in the same file only)
// local vars have ****** no linkage ******

int main(){
    extern int a; // this states a is declared in elsewhere
    // (in other files and used by other files using external linkage or in same file afterwords)
    printf("%d", a);
}

int a = 20; // global var but declared at last and this can be accessed in main using extern