#include <stdio.h>
#include <math.h>  // Biblioteca necessária para sqrt()

int main() {
    char opcao;
    float raio, areatri, areaqua, areahex;

    printf("Digite um caractere: ");
    scanf("%c", &opcao);

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    if ((opcao == 'T') || (opcao == 't')) {
    
        areatri = (3 * pow(raio, 2) * sqrt(3)) / 4;

        printf("A area do triangulo inscrito e: %.2f\n", areatri);
    } else if ((opcao == 'Q') || (opcao == 'q')){
        areaqua = 2* pow(raio,2);

        printf("A area do triangulo inscrito e: %.2f\n", areaqua);
    } else if ((opcao == 'H')|| (opcao == 'h')){
        areahex= ((3*sqrt(3)/2))* pow(raio,2);

        printf("a area do hexagono inscrito e: %.2f\n", areahex);
    } else {
        printf("caracter invalido");
    }
    return 0;
}
