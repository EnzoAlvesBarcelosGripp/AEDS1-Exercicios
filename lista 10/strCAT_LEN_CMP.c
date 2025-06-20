#include <stdio.h>

void meu_strcat(char *origem, char *destino) {
    while (*destino != '\0') {
        destino++;
    }
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}

int meu_len(char *destino) {
    int tam = 0;
    while (*destino != '\0') {
        tam++;
        destino++; // <-- estava faltando isso
    }
    return tam;
}

int meu_cmp(char *destino, char *origem) {
    while (*destino != '\0' && *origem != '\0') {
        if (*destino != *origem) {
            return *destino - *origem;
        }
        destino++;
        origem++;
    }
    return *destino - *origem;
}

int main() {
    char destino[100] = "Hello, ";
    char origem[] = "World!";
    
    // Mostra tamanho antes da concatenação
    int tam = meu_len(destino);
    printf("Tamanho antes: %d\n", tam);

    // Concatena
    meu_strcat(origem, destino);
    printf("String concatenada: %s\n", destino);

    // Mostra tamanho após concatenação
    tam = meu_len(destino);
    printf("Tamanho depois: %d\n", tam);

    // Compara strings
    int resultado = meu_cmp(destino, origem);
    if (resultado == 0) {
        printf("Strings iguais\n");
    } else if (resultado < 0) {
        printf("String 1 é menor\n");
    } else {
        printf("String 1 é maior\n");
    }

    return 0;
}
