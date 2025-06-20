#include <stdio.h>
int soma_div(int n){
    int soma = 0;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            soma+=i;
        }}return soma;
}
int main(){
    int n;
    printf("informe um numero:");
    scanf("%d",&n);
    printf("a soma dos divisores eh:%d",soma_div(n));
    return 0;
}