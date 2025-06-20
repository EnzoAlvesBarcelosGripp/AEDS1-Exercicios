#include <stdio.h>

int main(){
    int i=1, num1=0, num2=1, N, prox;

        printf("Entrada:"); 
        scanf("%d",&N);

        while (i<=N){
            prox= num1 + num2;
            num1= num2;
            num2=prox;
            i++;
            printf("%d,",prox);
        }
        
    return 0;
}