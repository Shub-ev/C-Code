#include <stdio.h>
#include <ctype.h>

int stack[20];
int top = -1;

int bin_oper(int a, int b, char opnd){
    switch(opnd){
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b; 
    }

    return -1;
}

int postfix_eval(char *exp){
    for(int i = 0; exp[i] != '\0'; i++){
        if(isdigit(exp[i])){
            stack[++top] = exp[i] - '0';
        }
        else{
            int num2 = stack[top--];
            int num1 = stack[top--];
            int res = bin_oper(num1, num2, exp[i]);
            stack[++top] = res;
        }
    }

    return stack[top];
}

int main(){
    char ch[] = "512+4*+3-";
    
    printf("Result : %d\n", postfix_eval(ch));

    return 0;
}