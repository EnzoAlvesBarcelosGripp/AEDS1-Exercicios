#include <stdio.h>

int main() { 
    int num1;

    printf("digite o numero: ");
    scanf("%d", &num1);

    if (num1 %5 == 0){
        printf("este numero e multiplo de 5\n");
    } else {
        printf("este numero nao e  multiplo de 5\n");
    } 
    return 0;
}
