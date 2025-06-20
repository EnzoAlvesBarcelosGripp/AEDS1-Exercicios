#include <stdio.h>
int main (){
    int v[10],qpar=0;
    printf("Entrada:");
    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
        if (v[i]%2==0){
            qpar++;
        }
    }
    printf("quantidade de numeros pares: %d",qpar);
    return 0;
}