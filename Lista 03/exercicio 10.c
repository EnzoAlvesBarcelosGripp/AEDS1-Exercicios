#include <stdio.h>

int main(){
    float num1, num2, num3;

    printf("digite os 3 lados do triangulo");
    scanf("%f %f %f", &num1, &num2,&num3);

    if ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1)) {
        if ((num1 == num2) && (num1 == num3)) {
            printf("O triangulo de lados %.2f, %.2f e %.2f é equilatero\n", num1, num2, num3);
        } else if ((num1 == num2) || (num1 == num3) || (num2 == num3)) {
            printf("O triangulo de lados %.2f, %.2f e %.2f é isosceles\n", num1, num2, num3);
        } else {
            printf("O triangulo de lados %.2f, %.2f e %.2f é escaleno\n", num1, num2, num3);
        }
    } else {
        printf("Os valores %.2f, %.2f e %.2f não formam um triangulo valido\n", num1, num2, num3);
    }
    return 0;
}
