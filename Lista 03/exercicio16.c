#include <stdio.h>

int main() {
    char opcao;
    int num1, num2, resultado;

    printf("Menu de operacoes matematicas:\n");
    printf("(a) Soma\n");
    printf("(b) Subtracao\n");
    printf("(c) Multiplicacao\n");
    printf("(d) Divisao\n");
    printf("(e) Modulo\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    if (opcao == 'a'  || opcao == 'b' || opcao == 'c' || opcao == 'd' || opcao == 'e') {
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &num1, &num2);
    }

    switch (opcao) {
        case 'a': 
            resultado = num1 + num2;
            printf("Resultado da soma: %d\n", resultado);
            break;

        case 'b':            
            resultado = num1 - num2;
            printf("Resultado da subtracao: %d\n", resultado);
            break;

        case 'c': 
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;

        case 'd':
                if (num2 == 0) {
                printf("Erro: divisao por zero nao permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisao: %d\n", resultado);
            }
            break;

        case 'e': 
            if (num2 == 0) {
                printf("Erro: divisao por zero nao permitida.\n");
            } else {
                resultado = num1 % num2;
                printf("Resultado do modulo: %d\n", resultado);
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
