#include <stdio.h>

int main() {
    char nomeEntrada[100] = "entrada.txt";
    char nomeSaida[100] = "saida.txt";
    char buffer[100];

    freopen(nomeEntrada, "r", stdin);
    freopen(nomeSaida, "w", stdout);

    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("%s", buffer);
    }

    return 0;
}
