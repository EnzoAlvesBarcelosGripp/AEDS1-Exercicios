#include <stdio.h>
int main(){
    int v[15],somai=0;
    printf("Entrada:");
    for (int i=0;i<15;i++){
        scanf("%d",&v[i]);
        if (v[i]%2!=0){
            somai+=v[i];
        }
    }
    printf("Saida:\n");
    printf("Soma dos numeros impares: %d",somai);
    return 0;
}