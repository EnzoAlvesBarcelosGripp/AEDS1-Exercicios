#include <stdio.h>

int main() {
    float a1,a10,r;
    const int n = 10;

    printf("escreva o primeiro termo da PA e sua razao, respectivamente: ");
    scanf("%f %f", &a1, &r);

    a10 = a1 + ( n - 1);* r;
    
    printf("o decimo termo da PA e: %.2f\n", a10);

    return 0;

}
