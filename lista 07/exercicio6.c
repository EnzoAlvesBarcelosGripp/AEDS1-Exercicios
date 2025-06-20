#include <stdio.h>
double soma_seq(int n){
    double soma=0;
    for (int i=1;i<=n;i++){
        soma+=1.0/i;
    } return soma;
}
int main(){
    int n;
    printf("informe um numero:");
    scanf("%d",&n);
    printf("o valor da soma do %d-esimo termo eh: %.2lf",n,soma_seq(n));
    return 0;
}