#include <stdio.h>

int main(){
    float nota;
    
    do {
        printf("entrada: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10){
        printf("saida: nota invalida. Digite novamente.");
        } 

    }   while (nota < 0 || nota > 10);  
        printf("Saida: nota registrada %d", nota);
        
        return 0;
    }
