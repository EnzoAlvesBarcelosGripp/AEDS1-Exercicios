#include <stdio.h>
#include <math.h> 

typedef struct {
    float x;
    float y;
} ponto2d;

int main() {
    ponto2d ponto_inicial;
    ponto2d ponto_final;
    int opcao;
    float distancia;

    do {
        printf("\n--- Menu Interativo ---\n");
        printf("1. Digitar os valores do ponto inicial\n");
        printf("2. Digitar os valores do ponto final\n");
        printf("3. Calcular e exibir a distancia entre os dois pontos\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite os valores do ponto inicial (x y): ");
                scanf("%f %f", &ponto_inicial.x, &ponto_inicial.y);
                break;

            case 2:
                printf("Digite os valores do ponto final (x y): ");
                scanf("%f %f", &ponto_final.x, &ponto_final.y);
                break;

            case 3: {
                float dx = ponto_final.x - ponto_inicial.x;
                float dy = ponto_final.y - ponto_inicial.y;
                distancia = sqrt(pow(dx, 2) + pow(dy, 2));
                printf("Distancia: %.2f\n", distancia);
                break;
            }

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Por favor, escolha uma opcao entre 1 e 4.\n");
        }
    } while (opcao != 4);

    return 0;
}