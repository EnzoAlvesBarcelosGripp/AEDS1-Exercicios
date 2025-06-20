#include <stdio.h>

int eh_primo(int num){
    if(num<2) {
        return 0; //nao existe primo menor que 2
    }
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            return 0; //nao e primo
        }
    }
    return 1; // como nao encontrou divisor,é primo.     
}
void imprime_primo (int num1,int num2){
    int encontrouprimo = 0; //variavel de controle
    for (int i=num1; i<=num2;i++){
        if (eh_primo(i)){
            printf ("%d ",i);
            encontrouprimo = 1; //para dps mostrar se nao há nenhum primo
        }  
    }
    if (encontrouprimo == 0){
        printf("Nenhum primo foi encontrado.");
    }
    return;
}
int main(){
    int a,b;

    printf("Informe dois numeros");
    scanf("%d %d",&a, &b);

    if (a >= b){
        printf("Por favor, ponha o primeiro numero sendo menor que o segundo.");
        return 1;
    } else {
    imprime_primo(a, b);
    }
    return 0;
}