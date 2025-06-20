#include <stdio.h>
int main (){
    int v1[5],v2[5],vsoma[5];
    printf("Entrada:\n");
    printf("vetor 1:");
    for(int i=0;i<5;i++){
        scanf("%d",&v1[i]);
    }
    printf("vetor 2:");
    for(int i=0;i<5;i++){
        scanf("%d",&v2[i]);
    }
    printf("Saida:\n");
    for(int i=0;i<5;i++){
        vsoma[i]=v1[i]+v2[i];
    }
    printf("vetor soma:");
    for(int i=0;i<5;i++){
        printf("%d ",vsoma[i]);
    }
    return 0;
}