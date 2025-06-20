#include <stdio.h>
#include <math.h>

int main(){
    float ladoq, Diagonal;

    printf("Digite o valor do lado de um quadrado: ");
    scanf("%f", &ladoq);

    Diagonal= ladoq * sqrt(2); // srqrt = raiz quadrada (numero que fica dentro da raiz).

    printf("perimetro: %.2f\n", 4* ladoq);
    printf("area: %.2f\n", ladoq * ladoq);
    printf("diagonal: %.2f\n", Diagonal);

    return 0;
}
