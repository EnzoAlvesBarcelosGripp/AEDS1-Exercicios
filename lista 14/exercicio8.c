#include <stdio.h>
#include <string.h> 

typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
} Aluno;

int main() {
    Aluno a[5];
    float media[5];
    int posMaior = 0, posMenor = 0;
    float maiorMedia, menorMedia;
    float maiorNota1;
    int posMaiorNota1 = 0;
    for (int i = 0; i < 5; i++) {
        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';  // remove o '\0'
        printf("Informe a nota da prova 1 do aluno %d: ", i + 1);
        scanf("%f", &a[i].nota1);
        printf("Informe a nota da prova 2 do aluno %d: ", i + 1);
        scanf("%f", &a[i].nota2);
        printf("Informe a nota da prova 3 do aluno %d: ", i + 1);
        scanf("%f", &a[i].nota3);
        getchar(); 
    }
    maiorNota1 = a[0].nota1;
    for (int i = 1; i < 5; i++) {
        if (a[i].nota1 > maiorNota1) {
            maiorNota1 = a[i].nota1;
            posMaiorNota1 = i;
        }
    }
    for (int i = 0; i < 5; i++) {
        media[i] = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3.0;
    }

    maiorMedia = menorMedia = media[0];

    for (int i = 1; i < 5; i++) {
        if (media[i] > maiorMedia) {
            maiorMedia = media[i];
            posMaior = i;
        }
        if (media[i] < menorMedia) {
            menorMedia = media[i];
            posMenor = i;
        }
    }
    printf("\nAluno com maior nota na prova 1: %s (%.2f)\n", a[posMaiorNota1].nome, maiorNota1);
    printf("Aluno com a maior media geral: %s (%.2f)\n", a[posMaior].nome, maiorMedia);
    printf("Aluno com a menor media geral: %s (%.2f)\n", a[posMenor].nome, menorMedia);
    for (int i = 0; i < 5; i++) {
        if (media[i] >= 6.0) {
            printf("O aluno %s está APROVADO! (Média: %.2f)\n", a[i].nome, media[i]);
        } else {
            printf("O aluno %s está REPROVADO! (Média: %.2f)\n", a[i].nome, media[i]);
        }
    }
    return 0;
}