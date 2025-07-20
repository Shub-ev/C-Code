#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 30

int stack[SIZE];
int top = -1;

int prio(char ch)
{
	if(ch == '+' || ch == '-'){
		return 1;
	} else if(ch == '*' || ch == '/'){
		return 2;
	} else if(ch == '^'){
        return 3;
    }
    else if(ch == '('){
		return 4;
	}

	return -1;
}

int main()
{
	char ch[] = "a+b*(c^d-e)^(f+g*h)-i";
	int n = strlen(ch);

	char *res = (char*) malloc(sizeof(char) * (n+1));
	int res_cnt = 0;

	for(int i = 0; i < n; i++){
		char chr = ch[i];
		if(isalnum(chr)){
			res[res_cnt++] = chr;
		}
        else if(chr == '('){
            res[res_cnt] = chr;
        }
        else if(chr == ')'){
			while(top != -1 && stack[top] != '('){
				res[res_cnt++] = stack[top--];
			}
            if(top != -1 && stack[top] == '(') top--;
		}
		else {
			while(top != -1 && stack[top] != '(' && prio(stack[top]) >= prio(chr)){
				res[res_cnt++] = stack[top--];
			}
			stack[++top] = chr;
		}
	}

	while(top != -1){
		res[res_cnt++] = stack[top--];
	}

	printf("%s\n", res);

	return 0;
}
