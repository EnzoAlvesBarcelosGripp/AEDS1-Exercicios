#include <stdio.h> 

int main() {
    int num1, c, d, u, inv;

    printf("Dgite um numero com 3 digitos: ");
    scanf("%d", &num1);

    c = num1/100; //resultado é inteiro, logo 123/100=1
    d = (num1%100)/10; // 123%100 =23 ; 23/10= 2
    u = num1%10; // 123% 10 = 3

    inv = u*100 + d*10 + c;

    printf("o numero invertido e: %d\n", inv);

    return 0;
}
