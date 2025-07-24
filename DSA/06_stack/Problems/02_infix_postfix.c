#include <stdio.h>
#include <ctype.h>

int stack[20];
int top = -1;

int precedence(char ch){
    switch(ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '\\':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

int main(){
    char ch[] = "A*B-(C+D)+E";
    char res[20];
    int res_c = 0;

    for(int i = 0; ch[i] != '\0'; i++){
        if(isalnum(ch[i])){
            res[res_c++] = ch[i];
        }
        else if(ch[i] == '('){
            stack[++top] = '(';
        }
        else if(ch[i] == ')'){
            while(top != -1 && stack[top] != '('){
                res[res_c++] = stack[top--];
            }
            if(top != -1){
                top--;
            }
        }
        else{
            while(top != -1 && precedence(stack[top]) >= precedence(ch[i])){
                res[res_c++] = stack[top--];
            }
            stack[++top] = ch[i];
        }
    }
    while(top != -1){
        res[res_c++] = stack[top--];
    }
    res[res_c] = '\0';

    printf("Final : %s\n", res);

    return 0;
}