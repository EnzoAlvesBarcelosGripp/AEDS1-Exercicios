#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calculo_vet (int *vetA,int tam, int *vetB,int tam2,int *vetC,int tam3){
    for (int i=0;i<tam3;i++){
        vetC[i]= vetA[i] - vetB [i];
    }
    return;
}
int main (){
    int vetA[5],vetB[5],vetC[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++){
        vetA[i]=rand();
        vetB[i]=rand();
    }
    calculo_vet(vetA,5,vetB,5,vetC,5);
    for(int i=0;i<5;i++){
        printf("%d ",vetC[i]);
    }
    return 0;
}
