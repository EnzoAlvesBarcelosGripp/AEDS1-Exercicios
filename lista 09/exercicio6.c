#include <stdio.h>
int main (){
    int matriz[2][3],matriz_transposta[3][2],soma=0;
    printf("Informe os valores da matriz: \n");
    for (int lin=0;lin<2;lin++){            
        for(int col=0;col<3;col++){
            printf("digite os valores para a posicao [%d] [%d]: ",lin,col);
            scanf("%d ",&matriz[lin][col]);
            soma += matriz[lin][col];
            }
        }
    printf("Matriz original no formato de tabela: \n");
    for(int lin=0;lin<2;lin++){
        for(int col=0;col<3;col++){
            printf("%d",matriz[lin][col]);
        }
        printf("\n");
    }
    printf("Matriz transposta: \n");
    for(int lin=0;lin<3;lin++){
        for(int col=0;col<2;col++){
            matriz_transposta[lin][col]= matriz[col][lin];
            printf("%d",matriz_transposta[lin][col]);
        }
        printf("\n");
    }
    printf("Soma dos elementos da matriz: %d",soma);
    return 0;    
}