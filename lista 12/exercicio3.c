#include <stdio.h>
#include<stdlib.h>

int main (){
    int n,*v;
    printf("informe o tamanho do vetor: \n");
    scanf("%d",&n);
    v = (int *)malloc(n*sizeof(int));
    if (v == NULL){
        printf("Erro ao alocar a memoria! ");
        return 1;
    }
    printf("preencha os valores do vetor: \n");
    for (int i=0;i<=n-1;i++){
        scanf("%d",&v[i]);
    }
    printf("Vetor :");
    for (int i=0;i<=n-1;i++){
        printf("%d ",v[i]);
    }
    free(v);
    return 0;
}