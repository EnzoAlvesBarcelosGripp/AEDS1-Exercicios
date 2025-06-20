#include <stdio.h>

int main(){
    int num1;

    printf("digite seu numero:");
    scanf("%d", &num1);

    if (num1 >= 100 && num1 <= 200){
        printf("esta no intervalo entre 100 e 200\n");
    } else {
        printf("nao esta no intervalo entre 100 e 200\n");
    }
    return 0;
}