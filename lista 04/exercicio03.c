#include <stdio.h>

int main(){
    int i=1,N, num=1;
    
    printf("informe a quantidade de numeros da sequencia que sera mostrada: ");
    scanf("%d",&N);

    while (i<=N){
        if (num%3==0  &&  num%5 ==0  || num%7==0){
            printf("O %d da sequencia eh: %d\n",i, num); 
    }
    i ++;
    num +=2;
}
return 0;
}
