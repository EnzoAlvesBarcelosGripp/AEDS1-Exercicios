#include <stdio.h>

int main() {
    int N, i = 1, fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &N);

    do {
        fat *= i;  
       i++;     
    } while (i <= N);
    printf("Saida: %d! = %d\n", N,fat);  
    return 0;
}