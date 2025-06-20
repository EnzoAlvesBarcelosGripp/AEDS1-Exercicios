#include<stdio.h>
int meu_len(char *srt){
    int tam=0;
    while(*srt!='\0'){
        srt ++;
        tam ++;
    }
    return tam;
}

int main(){
    char srt[100];
    printf("Insira a string: ");
    scanf("%99[^\n]");
    printf("Numero de caracteres: %d",meu_len(srt));
}