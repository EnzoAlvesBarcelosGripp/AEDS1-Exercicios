#include <stdio.h>

int main(){
    float numerador, denominador;
    
    printf("escreva o numerador e o denominador,respctivamente: ");
    scanf("%f %f", &numerador, &denominador);

    printf("Seu valor decimal e: %.2f\n", numerador/denominador);

    return 0;
}
