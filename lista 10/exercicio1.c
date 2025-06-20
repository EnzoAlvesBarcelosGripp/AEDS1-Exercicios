#include<stdio.h>

int main(){
    char srt[50];
    printf("Insira a string: \n");
    scanf("%[^\n]",srt);
    printf("%s",srt);
    return 0;
}