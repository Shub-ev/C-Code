#include<stdio.h>

int main()
{
    char ch[] = "WELCOME";
    printf("%s\n", ch);

    for(int i = 0; i < sizeof(ch); i++){
        // ch[i] = (ch[i] - 'A') + 'a'; // here we are using 2 operations (arithmatic op) so this is inifficient
        ch[i] = ch[i] + 32; // 'A' = 65 , 'a' = 97 => 97-65 = 32
    }

    printf("%s\n", ch);
    return 0;
}