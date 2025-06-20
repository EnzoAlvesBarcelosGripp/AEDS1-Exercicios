#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[50];
    float altura;
    Data nascimento;
}Pessoa;

Data geraraleatoriamente (){
    Data data;
    data.ano = rand()%25 +2000;
    data.mes = rand()%12 +1;
    data.dia = rand()%30 +1;
    return data;
}

int main (){
    Pessoa p[10];

    srand(time(NULL));
    for (int i=0;i<10;i++){
        printf("Informe o nome da pessoa %d: \n",i+1);
        fgets(p[i].nome,sizeof(p[i].nome),stdin);
        printf("Informe a altura da pessoa %d \n:",i+1);
        scanf("%f",&p[i].altura);

        getchar();

        p[i].nascimento = geraraleatoriamente();

        printf("\n");
    }
    printf("\n=== Dados das Pessoas ===\n");
    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", p[i].nome);
        printf("Altura: %.2f m\n", p[i].altura);
        printf("Data de Nascimento: %d/%d/%d\n\n", 
            p[i].nascimento.dia, 
            p[i].nascimento.mes, 
            p[i].nascimento.ano);
    }

    return 0;
}