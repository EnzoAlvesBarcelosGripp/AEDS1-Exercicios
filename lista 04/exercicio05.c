#include <stdio.h>

int main(){
    n = int(input("Digite um número inteiro: "));
    linha = 1;
    
    while (linha <= n){
        print("*" * linha);
        linha += 1;
    }
    return 0;
}