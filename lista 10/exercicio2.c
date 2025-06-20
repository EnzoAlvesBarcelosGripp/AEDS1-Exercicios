#include<stdio.h>
int main (){
    char srt[50];
    printf("Insira a string: \n");
    scanf("%49[^\n]",srt);
    
    for (int i=0;i<=3;i++){
        if (srt[i]=='\0'){
            break;
        }
        printf("%c \n",srt[i]);
    }
    return 0;
}