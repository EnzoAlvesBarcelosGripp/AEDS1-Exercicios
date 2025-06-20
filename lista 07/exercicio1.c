#include <stdio.h>

int main (){
    int n,mult=1;
    printf("Entrada:");
    scanf("%d",&n);
    printf("Saida:");
    for( int i=1;i<=n;i++){
        mult = i*3;
        printf("%d",mult);
    } return 0;}