#include <stdio.h>

void calculaPotencias(int n, int *quadrado, int *cubo){
    *quadrado = n *n;// nao usar pow, pois ele retorna um valor do tipo double;
    *cubo = n*n*n;
    printf("Quadrado = %d.\n",*quadrado);
    printf("Cubo = %d.",*cubo);
    return;
}
int main(){
    int n,quadrado,cubo;

    printf("infome um numero: ");
    scanf("%d",&n);

    calculaPotencias(n,&quadrado,&cubo);
    return 0;
}