#include <stdio.h>

int main() {
    char caractere1, caractere2;

    printf("Digite dois caracteres: ");
    scanf(" %c %c", &caractere1, &caractere2);  // Corrigindo leitura

    // Se caractere1 for minúsculo e caractere2 for maiúsculo, converte caractere2 para minúsculo
    if (caractere1 >= 'a' && caractere1 <= 'z' && caractere2 >= 'A' && caractere2 <= 'Z') {
        caractere2 = caractere2 + 32;
    } 
    // Se caractere1 for maiúsculo e caractere2 for minúsculo, converte caractere2 para maiúsculo
    else if (caractere1 >= 'A' && caractere1 <= 'Z' && caractere2 >= 'a' && caractere2 <= 'z') {
        caractere2 = caractere2 - 32;
    }

    // Exibir os caracteres em ordem decrescenteSS
    if (caractere1 < caractere2) {
        printf("'%c' '%c'\n", caractere1, caractere2);
    } else {
        printf("'%c' '%c'\n", caractere2, caractere1);
    }

    return 0;
}

