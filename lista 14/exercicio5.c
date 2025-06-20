#include <stdio.h>

typedef struct {
    char nome[50];
    char estiloMusical[30];
    int numeroIntegrantes;
    int posicaoRanking;
}Banda;
int main (){
    Banda b[5];

    for (int i=0;i<5;i++){
        printf("Informe o nome da banda %d: \n",i+1);
        fgets (b[i].nome,sizeof(b[i].nome),stdin);
        fflush(stdin);
        printf("Informe o estilo musicao da banda (%s): \n",b[i].nome);
        fgets(b[i].estiloMusical,sizeof(b[i].estiloMusical),stdin);
        fflush(stdin);
        printf("Informe o numero de integrantes da banda (%s): \n",b[i].nome);
        scanf("%d",&b[i].numeroIntegrantes);
        printf("Informe o ranking da banda (%s)",b[i].nome);
        scanf("%d",&b[i].posicaoRanking);
    }
    for (int i=0;i<5;i++){
        printf("Nome: %s \n",b[i].nome);
        printf("Estilo musical: %s ",b[i].estiloMusical);
        printf("Numero de integrantes: %d",b[i].numeroIntegrantes);
        printf("Posicao no ranking: %d",b[i].posicaoRanking);
        printf("\n");

    }
return 0;
}