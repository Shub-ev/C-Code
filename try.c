#include <stdio.h>
#include <ctype.h>
#include <string.h>

char stk[30];
int top = -1;

int ope_prec(char ch)
{
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '^')
        return 3;
    
    return 0;
}

void infx_to_pstfx(char* str, char* res)
{
    int n = strlen(str);

    int j = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(isalnum(ch))
        {
            res[j++] = ch;
        }
        else if(ch == '(')
        {
            stk[++top] = '(';
        }
        else if(str[i] == ')')
        {
            while(top != -1 && stk[top] != '(')
            {
                res[j++] = stk[top--];
            }
            if (top != -1 && stk[top] == '(')
                top--;
        }
        else
        {
            while((ope_prec(str[i]) > ope_prec(stk[top])) && top != -1 && stk[top] != '(')
            {
                res[j++] = stk[top--];
            }
            stk[++top] = str[i];
        }
    }

    while(top != -1)
    {
        res[j++] = stk[top--];
    }

    res[j] = '\0';
}

int main()
{
    char arr[] = "A+B*(C^D-E)^(F+G*H)-I";

    char ch[strlen(arr)+1];
    infx_to_pstfx(arr, ch);
    printf("%s", ch);
}