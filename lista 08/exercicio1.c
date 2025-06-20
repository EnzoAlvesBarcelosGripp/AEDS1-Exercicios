#include <stdio.h>
int main(){
    int v[10];
    printf("Entrada:");
    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
    }
    printf("Saida:\n");
    for(int i=0;i<10;i++){
        printf("Elemento %d na posicao %d\n",v[i],i);
    }
    return 0;     
}