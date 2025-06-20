#include <stdio.h>

void classificaNumero(int n, int *positivos, int *negativos){
    if (n>0){
        (*positivos) ++;
    } else if(n<0){
        (*negativos) ++;
    }
    return;
}
int main(){
    int n, positivos=0, negativos=0;
    do{
        printf("informe um numero: ");
        scanf("%d",&n);
        classificaNumero(n,&positivos,&negativos);
    } while (n != 0);
    printf("quantidade de numeros negativos: %d\n",negativos);
    printf("quantidade de numeros positivos: %d",positivos);
    return 0;
}