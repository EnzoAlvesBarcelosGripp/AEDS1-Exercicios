#include <stdio.h>

int main() {
    int N, i, fat;

    do {
        printf("Digite um numero: ");
        scanf("%d", &N);
        fat = 1;   
        i=1;
        do
        {
            fat *= i;  
            i++;
        } while (i <= N);
        printf("Saida: %d! = %d\n", N,fat);
          
    } while (N!=0);
    printf("programa encerrado");  
    return 0;
}