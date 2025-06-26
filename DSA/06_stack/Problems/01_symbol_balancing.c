#include<stdio.h>
#include "stack.h"

int main()
{
    int n;
    printf("Enter the size of string: ");
    scanf("%d", &n);

    char* ch_ptr = (char*) malloc(sizeof(char) * n);
    scanf("%s", ch_ptr);

    // create Stack
    struct Stack* s = create();

    // printf("%s", ch_ptr);
    for(int i = 0; i < n; i++)
    {
        if(ch_ptr[i] == '(' || ch_ptr[i] == '{' || ch_ptr[i] == '[')
        {
            push(ch_ptr[i]);
        }
        else
        {
            if(s->isEmpty())
            {
                printf("Stack is empty!\n");
                return 1;
            }

            char ch = s->top();
            printf("%c", ch);
        }
    }

    return 0;
}