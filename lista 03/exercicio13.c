#include <stdio.h>
#include <math.h>

int main(){
    int num1;
    float ladoc,ladol,area,raio,ladoq;
    const double pi= 3.14159;

    printf("Digite o numero: ");
    scanf("%d", &num1);

    if ((num1 == 1)  ||  (num1 == 2)){
        printf ("informe as medidas do lado de um retangulo: ");
        scanf ("%f %f", &ladoc, &ladol);

        area = ladoc * ladol;

        printf ("A area do retangulo informado e: %.2f", area);   
    } else if ((num1 == 3) || (num1 == 4) || (num1 == 5)){
        printf ("informe a medida do raio de um circulo: ");
        scanf ("%f", &raio);

        area = pi * pow(raio,2);

        printf ("A area do circulo informado e: %2.f", area);
    } else {
        printf("informe o lado do quadrado: ");
        scanf("%f", &ladoq);

        area = ( pi * pow(ladoq,2) / 4);

        printf (" a area da coroa circular formada pelo circulo inscrito e pelo circulo circunscrito e: %.2f", area);
    }
    return 0;
}