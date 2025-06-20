#include <stdio.h>
#include <math.h>

int main() {
    float raio, perimetro, area;
    const float pi = 3.14;

    printf("informe o valor do raio: ");
    scanf("%f",&raio);

   
    perimetro = 2* pi * raio;
    area = pow(raio,2) * pi;

    printf("perimetro %.2f\n", perimetro );
    printf("area: %.2f\n", area);

    return 0;
}
