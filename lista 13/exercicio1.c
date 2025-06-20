#include<stdio.h>

int main(){
    FILE *arquivo = fopen("exemplo.txt","w");
    if (arquivo==NULL){
        printf("Erro ao arir o arquivoo.\n");
        return 1;
    }
    fprintf(arquivo,"Hello, world!\n");
    fprintf(arquivo,"Escrevendo no arquivo ... \n");
    fclose(arquivo);
    return 0;
}