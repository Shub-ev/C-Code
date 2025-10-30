#include<stdio.h>

int asc(int n)
{
    // static variables are not stored in stack frame hence for each function
    // call same static var is abailable
    static int x = 0;
    
    if(n > 0){  // recursive condition
        x++;
        return asc(n-1) + x;
    }
    return 0;
}

int main()
{
    printf("%d", asc(5));
}