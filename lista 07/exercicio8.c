#include <stdio.h>
void troca(int *a,int *b){
    int var;
    var=*a;
    *a=*b;
    *b=var;
    return;
}
int main(){
    int a,b;
    printf("digite 2 numeros: ");
    scanf("%d %d",&a,&b);
    troca(&a,&b);
    printf("este sao os valores trocados %d %d",a,b);
    return 0;
}