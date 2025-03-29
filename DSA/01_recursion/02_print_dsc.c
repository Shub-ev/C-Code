#include<stdio.h>

void dsc(int n){
    if(n > 0){
        printf("%d ", n);
        dsc(n-1);
    }
}

int main(){
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);
    dsc(n);
    return 0;
}