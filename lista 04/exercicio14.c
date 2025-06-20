#include <stdio.h>

int main(){
    double soma=0;
    int N;
    printf("informe o numero do termo: ");
    scanf("%d",&N);

    for (int i=1; i <=N; i++){
        double termo = 1.0/ i;
        soma += termo;

    }
    printf ("O valor final da soma eh para o termo %d eh: %.3lf",N,soma);
    return 0;
}