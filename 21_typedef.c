// The typedef is a keyword that is used to provide existing data types with a new name.
// syntax => typedef existing_type new_type;

// When names of datatypes become difficult to use in programs, typedef is used 
// with user-defined datatypes, which behave similarly to defining an alias for commands.

#include<stdio.h>

int main(){
    // 1. allice for primitive type
    // here typedef creates alice "Number" for type int
    typedef int Number;
    Number num1 = 10, num2 = 20;
    printf("%d\n", num1);

    
    // 2. allice for struct
    typedef struct Temp{
        int x;
        char ch;
    } tmp;

    tmp t1;
    t1.x = 10;
    t1.ch = 'a';
    printf("%d _ %c\n", t1.x, t1.ch);


    // 3. alice for pointers
    typedef int* ip;
    ip ptr = &num1;
    printf("%lu _ %d\n", ptr, *ptr);


    // 4. alice for arrays
    typedef int ar[5];
    ar arr = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    
    return 0;
}