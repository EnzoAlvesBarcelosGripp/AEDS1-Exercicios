#include <stdio.h>

int main() {
    FILE *file = fopen("notas.txt", "r");
    char nome[50];
    float nota;

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(file, "%s %f", nome, &nota) != EOF) {
        printf("Nome: %s, Nota: %.2f\n", nome, nota);
    }

    fclose(file);
    return 0;
}
