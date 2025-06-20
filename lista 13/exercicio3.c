#include <stdio.h>

int main (){
    FILE *arquivo = fopen("exemplo.txt","a");
    if (arquivo==NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
    fprintf(arquivo,"Nova linha hihi(its me Michael)");
    fclose(arquivo);
    return 0;
}