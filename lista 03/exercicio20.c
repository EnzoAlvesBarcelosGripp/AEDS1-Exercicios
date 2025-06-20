#include <stdio.h>

int main(){
    double a,b, raiz;

    printf(" digite o coeficiente a (diferente de zero): ");
    scanf("%lf", &a);

    printf(" digite o coeficiente b: ");
    scanf("%lf", &b);

    raiz = -b/a;

    printf ("A raiz da equacao %.2lfx + %.2lf = %.2lf", a,b,raiz);

    return 0;
}