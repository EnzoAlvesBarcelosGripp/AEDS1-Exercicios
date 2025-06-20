#include <stdio.h>

void media_sequencia(int *n, int *soma, int *nimp,float *media){
    int num;
    do {
        printf("digite um numero,(0) para encerrar o programa: ");
        scanf("%d",&num);

        (*soma) += num;
        (*n)++;
        if ((num%2)!=0){
            (*nimp) ++;
        }
    } while (num != 0);
    
    *media = (*soma)/(*n-1);

    return;
} 
int main(){
    int n=0,soma=0,nimp=0;
    float media;

    media_sequencia(&n,&soma,&nimp,&media);

    printf("Media: %.2f\n",media);
    printf("quantidade de numeros impares: %d",nimp);

    return 0;
}