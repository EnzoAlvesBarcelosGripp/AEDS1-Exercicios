#include <stdio.h>

int main(){
    int velmax;
    float velomot;

    printf("infome a velocidade maxima da via: ");
    scanf("%d", &velmax);

    printf("informe a velocidade do motorista: ");
    scanf("%f", &velomot);

    if ( velomot - velmax <= 10){
        printf("multa: R$50.");
    } else if ( velomot - velmax >= 11  &&  velomot - velmax <= 30){
        printf("multa: R$100.");
    } else if ( velomot - velmax >= 30){
        printf("multa: R$200.");
    } else {
        printf("Motorista respeitou a lei.");
    }
    return 0;
}