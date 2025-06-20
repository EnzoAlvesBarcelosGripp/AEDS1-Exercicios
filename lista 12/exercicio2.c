#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define Max 1000
void soma_elementos (int *v,int tam,int *soma){
    for (int i=0;i<tam;i++){
        *soma += v[i];
    }
    return;
}
int main (){
    int *v,soma = 0;
    v = (int *)malloc(Max *sizeof(int));
    if (v == NULL){
        return 1;
    }
    srand(time(NULL));
    for (int  i = 0; i < Max ; i++){    
        v[i] = rand()%10 +1 ;
        printf("%d ",v[i]);
    
    }
    soma_elementos(v,Max,&soma);
    printf("\n soma dos elementos: %d",soma);
    free(v);
    return 0;
}