#include <stdio.h>
void cont_par(int n, int *soma){
    if (n==0){
        return;
    } else if(n%2==0){
        (*soma) ++;
    } return;
}
int main(){
    int n, soma= 0;
    do{printf("informe um numero,(0)para para:");
    scanf("%d",&n);
    cont_par(n,&soma);
    } while (n!=0);
    printf("quantidade de pares: %d",soma);
    return 0;
}