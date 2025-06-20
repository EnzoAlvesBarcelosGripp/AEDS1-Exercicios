#include <stdio.h>

int main(){
    int vet[10], invertido[10];
    printf("Entrada: ");
    for (int i=0;i<10;i++){
        scanf("%d",vet[i]);
    }
    for (int i = 0; i < 10; i++) {
        invertido[i] = vet[9 - i];  // Posição espelhada
    }
    printf("Vetor invertido: ");
    for (int i=0;i<10;i++){
        printf("%d",invertido[i]);
    }
    return 0;
}