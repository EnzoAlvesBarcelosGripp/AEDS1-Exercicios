#include <stdio.h>

int main(){
    int A, B, smultiplo = 0; // smultiplo (serve para ver se tem multiplo no intervalo)

    printf("digite os dois numeros inteiros para a verificacao de multiplos no intervalo fechado entre eles: ");
    scanf("%d %d", &A, &B);

    if (A > B){ // para garantir que no intervalo [x,y] x seja menor q y.
        int variavel=A;
        A=B;
        B=variavel;
    }

    int i= (A%5 == 0 ) ? A : A + (5-(A%5)); // poem o i como o valor do primeiro multiplo de 5 no intervalo, ex: se for A=11, i sera 15.

    printf("multiplos de 5 no intervalor [%d,%d]", A, B);
    
    while (i <= B){
    printf (" %d ",i);
    smultiplo=1;
    i += 5; // irá adcionar 5 em 5, de multiplo em multiplo, no intervalo.    
    }
    printf (smultiplo ? "\n" : "nao ha multiplos de 5 no intervalo fornecido. \n"); // se há multiplos true=1 (primeira mensagem), se n false=0 (segunda mensagem).
    
    return 0;
}