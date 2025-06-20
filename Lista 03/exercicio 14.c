#include <stdio.h>

int main(){
    char dia;

    printf("digite o caractere: ");
    scanf("%C", &dia);

    switch (dia) {
        case 'D' : case 'd':
        printf("Domingo\n");
        break;

        case 'S' : case 's':
        printf("segunda-feira ou sabado\n");
        break;

        case 'T' : case 't':
        printf ("terca-feira\n");
        break;

        case 'Q': case 'q' :
        printf ("quarta-feira ou quinta-feira\n");
        break;

        default:
        printf("Dia invalido\n");
    } 
}
