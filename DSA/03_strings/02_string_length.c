#include<stdio.h>

int main()
{
    char arr[20] = "Shubham";  // here string dosent occupy whole array 
    //hence 
    printf("%d\n", sizeof(arr));  // will print the size of array not the size of string

    // to get the size of array we have to find the terminating character / null character
    int i;
    for(i = 0; arr[i] != '\0'; i++);
    printf("%d\n", i);

    return 0;
}