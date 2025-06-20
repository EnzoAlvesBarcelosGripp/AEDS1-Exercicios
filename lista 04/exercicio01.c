#include <stdio.h>

int main(){
    int N,soma=0,i=1;

    printf("digite a quantidade de numeros que deseja informar");
    scanf("%d",&N);

    while (i<=N) {
        int num;
        printf("informe o %d numero: \n", i);
        scanf("%d", &num);

        soma +=num;
        i ++;
    }
    printf("a soma dos numeros eh: %d",soma);

    return 0;
}