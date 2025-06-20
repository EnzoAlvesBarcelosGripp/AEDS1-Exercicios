#include <stdio.h>
#define MAX 5

void preenche_v(int *v){
    printf("Vetor: \n");
    for (int i=0;i<MAX;i++){
        scanf("%d",&v[i]);
    }return;
}
int menor_v(int *v){
    int menor = v[0],pos = 0;
    for (int i=1;i<MAX;i++){
        if(menor>v[i]){
            menor=v[i];
            pos=i;
        }
    }
    return pos;
}
void troca(int *v,int pos){
    int aux = v[pos];
    v[pos]=v[0];
    v[0]=aux;
    for(int i=0;i<MAX;i++){
        printf("%d",v[i]);
    }return;
}
int main(){
    int v[MAX],pos;
    preenche_v(v);
    pos = menor_v(v);
    troca(v,pos);
    return 0;
}
  