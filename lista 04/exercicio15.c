#include <stdio.h>

int main(){
    char caractere; 
    
    do {
        printf("escreva o caractere desejado,(0) para parar o programa: ");
        scanf(" %c",&caractere);

        if (caractere>= '0' && caractere<='9'){ 
            printf("Digito.\n");
        } else if (caractere>'A' && caractere<='Z'){
            printf("Maiusculo.\n");
        } else if (caractere>='a' && caractere<='z'){
            printf("minusculo. \n");
        } else {
            printf("outro caractere. \n");
        }
        
    } while (caractere!='0');

    return 0; 
    
}