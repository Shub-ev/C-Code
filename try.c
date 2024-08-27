#include<stdio.h>
#include<try.h>

int main(){
    extern int a;  // Declares that the variable 'a' is defined in another file
    printf("%d", a);
}
