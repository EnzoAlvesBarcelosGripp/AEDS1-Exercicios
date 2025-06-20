#include <stdio.h>

int main(){
    double indiceplud, indiceplumax = 0.0, soma=0.0, media;
    int dia=0;

    for(int i=1;i<=31;i++){
        printf("indice pluviometrico do dia %d: \n",i);
        scanf("%lf", &indiceplud);
        if (indiceplud > indiceplumax){
            indiceplumax= indiceplud;
            dia = i;
        } 
        soma += indiceplud;
       
    }
    media= soma/31;

    printf("O dia em que houve o maior indice pluviometrico foi: %d\n",dia);
    printf("O indice pluviometrico medio foi: %.2lf\n",media);
    printf("O maior indice pluviometrico foi: %.2lf\n",indiceplumax);

    return 0;
}