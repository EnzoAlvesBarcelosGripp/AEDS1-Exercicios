#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define tam 20
void to_find(int *v,int n){
    int pos=0;
    for (int i=0;i<tam;i++){
        if(*(v+i)==n){
            pos = i;
            printf("O numero %d aparece na posicao %d \n",*(v+i),pos);
        }
    } if (pos==0){
        printf("O numero nao aparece dentro do vetor.\n");
    }
    return;
}
int main (){
    int *v,n;
    printf("Informe o numero a ser encontrado: \n");
    scanf("%d",&n);
    srand(time(NULL));
    for (int i=0;i<tam;i++){
        *(v+i)=rand()%100+1;
    }to_find(v,n);
    return 0;
}