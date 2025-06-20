#include<stdio.h>
#include<string.h>

typedef struct{
    char nome [50];
    int idade;
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf ("Nome:%s\n", p.nome);
    printf ("Idade: %d anos",p.idade);
    return;
}
int main (){
    Pessoa p1;
    printf("Insira o nome: ");
    scanf ("%[^\n]",p1.nome);
    printf("Insira a idade:");
    scanf("%d",&p1.idade);
    imprimirPessoa(p1);
    return 0;
}