#include<stdio.h>

typedef struct{
    char nomeCompanhia[50];
    char areaAtuacao[30];
    float valorAtual;
    float valorAnterior;
    double variacaoPorcentagem;
}Bolsa;

int main (){
    Bolsa b;
    printf("informe o noem da companhia \n");
    fgets(b.nomeCompanhia,sizeof(b.nomeCompanhia),stdin);
    fflush(stdin);
    printf("Informe a area de atuacao da %s \n",b.nomeCompanhia);
    fgets(b.areaAtuacao,sizeof(b.areaAtuacao),stdin);
    fflush(stdin);
    printf("informe o valor atual e o valor anterior da %s \n");
    scanf("%f %f",&b.valorAtual,&b.valorAnterior);
    b.variacaoPorcentagem = (double)(((b.valorAtual-b.valorAnterior)/b.valorAnterior)*100);
    printf("%s",b.nomeCompanhia);
    printf("%s",b.areaAtuacao);
    printf("%.2f",b.valorAtual);
    printf("%.2f",b.valorAnterior);
    printf("%.2lf",b.variacaoPorcentagem);
    return 0;
}