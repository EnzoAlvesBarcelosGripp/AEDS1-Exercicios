#include <stdio.h>
#include <math.h>

int main(){
    float a1,a5,r;
    int n = 5;

    printf("digite o primeiro termo e a razao de uma PG: ");
    scanf("%f %f",&a1 ,&r);

    a5 = a1 * pow(r,(n-1));

    printf("O quinto termo da PG e: %.2f", a5);

    return 0;
}
