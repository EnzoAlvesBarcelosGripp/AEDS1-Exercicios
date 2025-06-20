#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, diagonal;

    printf("Escreva a base e altura, respectivamente: ");
    scanf("%f %f", &base, &altura);

    diagonal = sqrt(base * base + altura * altura);

    
    printf("O perimetro deste retangulo e: %.2f\n", 2 * (base + altura));
    printf("A area deste retangulo e: %.2f\n", base * altura);
    printf("A diagonal deste retangulo e: %.2f\n", diagonal);

    return 0;
}
