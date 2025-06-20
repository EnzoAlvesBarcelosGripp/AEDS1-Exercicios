#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 100

void preencherMatriz (int mat[][Max],int tam,int tam2){
    for (int lin=0;lin<tam;lin++){
        for(int col=0;col<tam2;col++){
            mat[lin][col]= rand()%100 + 1;
        }
    } 
    return;
}
void somaDiagnalPrincipal (int mat[][Max],int tam,int tam2){
    int soma = 0;
    for (int lin=0;lin<tam;lin++){
        for(int col=0;col<tam2;col++){
            if (lin==col){
                soma+=mat[lin][col];
            }
        }
    }
    printf("Soma da diagonal: %d \n",soma);
    return ;
}
void somaAbaixoDiagonal(int mat[][Max],int tam,int tam2){
    int soma =0;
    for(int lin =0; lin <tam;lin++){
        for(int col=0;col<tam2;col++){
            if (lin>col){
                soma+=mat[lin][col];
            }
        }
    }
    printf("Soma abaixo do diagonal: %d \n",soma);
    return;
}
int main (){
    int n;
    printf("informe o valor do tamanho da matriz quadratica, no intervalo [1,100]: ");
    scanf("%d",&n);
    if (n<1){
        n = 1;
        printf("Valor invalido, valor sera redefinido para 1.");
    } else if (n>Max){
        n =100;
        printf("Valor acima do máximo. Será redefinido para %d.\n", Max);
    }
    int matriz_q [Max][Max];
    srand(time(NULL));
    preencherMatriz(matriz_q,n,n);
    somaDiagnalPrincipal(matriz_q,n,n);
    somaAbaixoDiagonal(matriz_q,n,n);
    printf("Matriz gerada com numeros aleatorios, para correcao: \n");
    for (int lin=0;lin<n;lin++){
        for(int col=0;col<n;col++){
            printf("%d ",matriz_q[lin][col]);
        }
        printf("\n");
    }
    return 0;
}