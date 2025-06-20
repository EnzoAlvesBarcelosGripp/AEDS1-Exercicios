#include <stdio.h>

int main(){
    int num,soma=0;

    do{
        printf("digite o numero,(-1) para parar: ");
        scanf("%d",&num);
        if(!(num%6==0) && num!=-1){
            soma+=num;
        }
    
    } while (!(num==-1));
    printf ("A soma dos numeros, ignorando os divisiveis por 6 eh: %d",soma);
    return 0;
}