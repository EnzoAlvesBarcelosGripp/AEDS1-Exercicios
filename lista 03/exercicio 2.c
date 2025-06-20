#include <stdio.h>

int main(){
    float num1;

    printf("digite o numero:");
    scanf ("%f", &num1);

    if (num1 > 0){
        printf ("o %.2f e maior que zero\n", num1);
    } else if (num1 == 0) {
        printf(" o %.2f e igual a zero\n", num1);
    } else {
        printf ("o %.2f e menor que zero\n", num1);
    }
    return 0;
}
