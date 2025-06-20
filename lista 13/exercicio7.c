#include <stdio.h>

int main() {
    char nomeArquivo[100];

    printf("Digite o nome do arquivo a ser removido: ");
    scanf("%s", nomeArquivo);

    if (remove(nomeArquivo) == 0) {
        printf("Arquivo removido com sucesso.\n");
    } else {
        perror("Erro ao remover o arquivo");
    }

    return 0;
}
