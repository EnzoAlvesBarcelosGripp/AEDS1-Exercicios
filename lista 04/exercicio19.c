#include <stdio.h>

int main() {
    int x, y;

    do {
        printf("Digite as coordenadas X e Y (0 0 para sair): ");
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0) {
            break; 
        }

        if (x > 0 && y > 0) {
            printf("Quadrante 1\n");
        } else if (x < 0 && y > 0) {
            printf("Quadrante 2\n");
        } else if (x < 0 && y < 0) {
            printf("Quadrante 3\n");
        } else if (x > 0 && y < 0) {
            printf("Quadrante 4\n");
        } else {
            printf("O ponto esta sobre um dos eixos.\n");
        }

    } while (1);

    return 0;
}