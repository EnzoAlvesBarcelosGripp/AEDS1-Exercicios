#include <stdio.h>
#include <math.h>

int main() {
    int num1,quadrado, cubo;

    printf("esvreva o numero");
    scanf("%d", &num1);

    quadrado = pow(num1,2);
    cubo = pow(num1,3);

    if (num1%2 == 0){
        printf("o seu quadrado e %d",quadrado);
    } else {
        printf("o seu cubo e %d",cubo);
    }
    return 0;
}