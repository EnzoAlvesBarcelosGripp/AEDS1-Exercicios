#include <stdio.h>

int main(){
    int num1;

    printf("infome o numero: ");
    scanf("%d", &num1);

    switch (num1) {
        case 1: 
        printf("Janeiro");
        break;

        case 2:
        printf("Feveriro");
        break;

        case 3:
        printf("Marco");
        break;

        case 4:
        printf("Abril");
        break;

        case 5:
        printf("Maio");
        break;

        case 6:
        printf("Junho");
        break;

        case 7:
        printf("Julho");
        break;

        case 8:
        printf("Agosto");
        break;

        case 9:
        printf("Setembro");
        break;

        case 10:
        printf ("Outubro");
        break;

        case 11:
        printf ("Novembro");
        break;

        case 12:
        printf("Dezembro");
        break;

        default:
        printf("mes invalido");
    }
    return 0;
}