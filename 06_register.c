// register storage specifier originally applied to int char and pointer var
// but by broader def, as arrays cannot be stored in registers but get preferential tretment by compiler

// register vars holds the value of a var in the register to enhance the processing speed 

#include<stdio.h>

int int_pow(register int a, register int pow){ // register declarations are valid for local variables only
    register int temp = 1;
    for(; pow; pow--){
        temp = temp * a;
    }

    // printf("%p\n", &temp); can not print the address of register variable
    // (bcoz 1.C -> address of regis. is not available 2.CPP => accessing register address prevent optimization hence)
    return temp;
}

// even we declare all vars as register not all will be register
// it depends on environment and code implementation (C / C++)

int main(){
    int a = int_pow(5,2);

    printf("%d\n", a);
}