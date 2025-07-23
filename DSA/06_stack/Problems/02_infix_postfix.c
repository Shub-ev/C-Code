// infix to postfix

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[30];
int top = -1;

int precedence(char ch) {
    switch(ch) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}

void infix_postfix(const char *ch, char *res) {
    int res_p = 0;
    for (int i = 0; ch[i]; i++) {
        if (isalnum(ch[i])) {
            res[res_p++] = ch[i];
        }
        else if (ch[i] == '(') {
            stack[++top] = ch[i];
        }
        else if (ch[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                res[res_p++] = stack[top--];
            }
            if (top != -1 && stack[top] == '(')
                top--;  // pop '('
        }
        else { // operator
            while (top != -1 && precedence(stack[top]) >= precedence(ch[i])) {
                res[res_p++] = stack[top--];
            }
            stack[++top] = ch[i];
        }
    }

    while (top != -1) {
        res[res_p++] = stack[top--];
    }

    res[res_p] = '\0';
}


int main(){
	char expr[] = "a+b*(c^d-e)^(f+g*h)-i";
	char res[sizeof(expr) + 1];

	infix_postfix(expr, res);
	printf("Result : %s\n", res);

	return 0;
}