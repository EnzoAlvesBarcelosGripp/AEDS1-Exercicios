#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
}Livro;
void imprimirInfo(Livro L){
    printf ("Nome:%s", L.titulo);
    printf ("Autor:%s", L.autor);
    printf ("Idade: %d anos",L.anoPublicacao);
    return;
}
int main (){
    Livro L1;
    printf("Informe o titulo do livro: ");
    fgets(L1.titulo, sizeof(L1.titulo), stdin);
    fflush(stdin);
    printf("Informe o autor do livro: ");
    fgets(L1.autor, sizeof(L1.autor), stdin);
    printf("Informe o ano de publicaco do livro: ");
    scanf("%d",&L1.anoPublicacao);
    imprimirInfo(L1);
    return 0;
}
