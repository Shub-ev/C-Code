#include<stdio.h>

extern int a;  // Declares that the variable 'a' is defined in another file
 
int main(){
    printf("%d", a);
}
