#include <stdio.h>

int main(){
    int i=1,N, num=1;
    
    printf("informe a quantidade de numeros da sequencia que sera mostrada: ");
    scanf("%d",&N);

    while (i<=N){
        printf("O %d da sequencia eh: %d\n",i, num);

        num +=2;
        i ++;
    }
    return 0;
    
}