#include <stdio.h>

int main() {
    float salario, salariomin, nsalarios; 

    printf("informe o salario minimo atual: ");
    scanf("%f", &salariomin);

    printf("infome o seu salario atual: ");
    scanf("%f", &salario );

    nsalarios = salario/ salariomin;

    printf("voce ganha %.2f salarios minimos\n", nsalarios);
    
    return 0;
}
