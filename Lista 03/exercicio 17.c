#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("indique a data para a verificacao se e bissexto ou nao(DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if ((ano%4 == 0 && ano%100 != 0) || ano%400 == 0){
        printf("o %d e bisexto\n", ano);   
    } else { 
        printf ("o %d nao e bissexto", ano);
    }
    return 0;
}
