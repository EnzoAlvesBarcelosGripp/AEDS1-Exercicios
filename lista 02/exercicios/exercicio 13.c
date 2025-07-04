#include <stdio.h>
#include<math.h>

int main () {
    float cat1, cat2, hipotenusa;

    printf("digite os valores dos catetos do triagulo retangulo: ");
    scanf("%f %f", &cat1 ,&cat2);

    hipotenusa= sqrt(cat1 * cat1 + cat2 * cat2);

    printf("hipotenusa = %.2f\n", hipotenusa);

    return 0;
}
