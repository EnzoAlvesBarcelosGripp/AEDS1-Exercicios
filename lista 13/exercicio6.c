#include <stdio.h>

int main() {
    FILE *file;
    int vetor[5] = {10, 20, 30, 40, 50};
    int leitura[5];

    // Escrita no arquivo binário
    file = fopen("numeros.bin", "wb");
    if (file == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    fwrite(vetor, sizeof(int), 5, file);
    fclose(file);

    // Leitura do arquivo binário
    file = fopen("numeros.bin", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fread(leitura, sizeof(int), 5, file);
    fclose(file);

    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %d\n", i+1, leitura[i]);
    }

    return 0;
}
