#include<stdio.h>

int main(){
    int num1;

    printf("digite o numero: ");
    scanf("%d", &num1);
    
    if (num1%7 == 0){
        printf("numero %d e divisivel\n", num1);
    } else{
        printf(" nao e divisivel\n");
    }
    return 0;
}