#include <stdio.h>
#include <math.h>

int main(){
    float lado1, lado2, lado3;
    float hip, cat1, cat2;

    printf("Informe os 3 lados do triangulo: ");
    scanf(" %f %f %f",&lado1,&lado2,&lado3);
    
    if (lado1>lado2 && lado1>lado3){
        hip = lado1;
        cat1 = lado2;
        cat2 = lado3;
    } else if (lado2 > lado3 && lado2>lado1){
        hip = lado2;
        cat1= lado1;
        cat2= lado3;
    } else{
        hip = lado3;
        cat1= lado1;
        cat2= lado2;
    } 

    float tolerancia = 0.0001;
    float somaQuadrados = pow(cat1, 2) + pow(cat2, 2);
    float hipQuadrado = pow(hip, 2);

    if ((hipQuadrado - somaQuadrados < tolerancia) && (hipQuadrado - somaQuadrados > -tolerancia)) {
        printf("O triangulo e retangulo.\n");
    } else if (hipQuadrado < somaQuadrados) {
        printf("O triangulo e acutangulo.\n");
    }    else {
        printf("O triangulo e obtusangulo.\n");
    }
    return 0;
}