#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite os 3 lados: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1)) {
        printf("Podem ser lados de um mesmo triangulo\n");
    } else {
        printf("%.2f, %.2f e %.2f nao podem ser lados de um mesmo triangulo\n", num1, num2, num3);
    }

    return 0;
}
