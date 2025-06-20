#include <stdio.h>
int eh_fibonacci(int n){
    if (n == 0 || n == 1) {
        return 1;
    }
    int anterior = 1, atual = 1, proximo ;
    while (proximo < n) {
        anterior = atual;
        atual = proximo;
        proximo = anterior + atual;
    } if(n == proximo){
        return 1;
    } else {
        return 0;
    }    
}
int main(){
    int n, pertence;
    printf("Digite o numero: ");
    scanf("%d", &n);
    pertence = eh_fibonacci(n);
    if (pertence==1) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", n);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", n);
    }
    return 0;
}