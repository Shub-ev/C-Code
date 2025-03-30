#include <stdio.h>

int main()
{
    char ch[] = "WelCoMe hOmEz!";
    printf("%s\n", ch);

    for (int i = 0; i < sizeof(ch); i++)
    {
        if (ch[i] <= 'z' && ch[i] >= 'a')
        {
            ch[i] = ch[i] - 32;
        }
        else if (ch[i] <= 'Z' && ch[i] >= 'A')
        {
            ch[i] = ch[i] + 32;
        }
    }
    printf("%s\n", ch);

    return 0;
}