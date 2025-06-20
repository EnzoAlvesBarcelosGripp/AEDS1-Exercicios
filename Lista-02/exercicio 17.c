#include <stdio.h>

int main(){
    float A,B,C;

    printf("digite o valor das variaveis A e B, respectivamente: ");
    scanf("%f %f",&A ,&B);

    C=A;
    A=B;
    B=C;

    printf("o valor de A e B sao: %.2f %.2f ", A, B);

    return 0;
}
