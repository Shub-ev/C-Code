#include<stdio.h>

void asc(int n){
    if(n > 0){  // base condition
        asc(n-1);
        printf("%d ", n);
    }
}

int main(){
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);
    asc(n);
    return 0;
}