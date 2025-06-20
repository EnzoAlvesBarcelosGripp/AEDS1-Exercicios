#include <stdio.h>

int main() {
    float quantkilowatts, vspago, vsdpago, vukilowatts; // Vs = valor a ser , vsd = valor a ser com desconto, Vu = valor unitario
    int salariomin;  

    printf("informe o salario minimo atual: ");
    scanf("%d", &salariomin);
    
    printf("informe a quantidade de kilowatts consumidos pela residencia: ");
    scanf("%f", &quantkilowatts);

    vukilowatts = ((1.0/7.0) * salariomin)/100;
    vspago = quantkilowatts * vukilowatts;
    vsdpago = vspago * 0.9;

    printf ("o valor unitario do kilowatt e %.2f\n", vukilowatts);
    printf("o valor a ser pago e: %.2f\n", vspago);
    printf("o valor a ser pago com desconto de 10 porcento e: %.2f", vsdpago);

    return 0;
}
