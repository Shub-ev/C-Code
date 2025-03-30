#include<stdio.h>

// in C string is an array of characters with '\0' as last character
// '\0' is referred as terminating character / null character

int main()
{
    char ch[20];
    gets(ch);
    printf("%s\n", ch);

    for(int i = 0; i < 20; i++) // print each character of array
    {
        if(ch[i] == '\0') printf("Null character!\n");
        printf("%c\n", ch[i]);
    }   // here all characters after string end will be null characters
    return 0;
}