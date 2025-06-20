#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v,rep=0,n,tam;
    printf("informe o tamanho do vetor: \n");
    scanf("%d",&tam);
    v = (int *)malloc(tam*sizeof(int));
    printf("informe os valores do vetor: \n");
    for (int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    printf("informe um numero a ser pesquisado e exibir quantas vezes esse numero aparece no veto: ");
    scanf("%d",&n);
    for (int i=0;i<tam;i++){
        if(v[i]==n){
            rep ++;
        }
    }
    printf("O numero solicitadado %d aparareceu %d vezes no vetor",n,rep);
    free(v);
    return 0;
}