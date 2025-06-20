#include <stdio.h>

void preenchimento_vetor (int *vet,int tam,int *count){
    for (int i=0;i<tam;i++){
        if (i%6 != 0 && i%10 != 6){
            vet[*count]= i;
            (*count) ++;
        }
    }
    return;
}
int main (){
    int vet[100],count = 0;
    preenchimento_vetor(vet,100,&count); 
    for (int i=0;i<count;i++){
        printf("%d ",vet[i]);
    }  
    return 0;
}