#include <stdio.h>
int main(){
    int num,soma=0;
    do {
        printf("infome o numero,(-1)para encerrar: ");
        scanf("%d",&num);
        if (num%12==0){
            soma ++;
        }
    } while(num!= -1);
    printf("A quantidade de numeros que sao multiplos de 6 e divisiveis por 4 ao mesmo tempo eh: %d",soma);
    return 0;
}