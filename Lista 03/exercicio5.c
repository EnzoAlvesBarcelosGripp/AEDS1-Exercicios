#include <stdio.h>

int main(){
    int num1, num2;
    float divisao;

    printf("escreva os dois numeros: ");
    scanf("%d %d",&num1 ,&num2);

    divisao = (float)num1 / num2;

    if ( num2 != 0){
        printf("a divisao do primeiro numero pelo segundo e: %.2f\n", divisao);
    } else {
        printf(" divisao por 0 invalida");
    }
    return 0;
}