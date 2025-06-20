#include <stdio.h>

float soma_dois_num(){
    float soma, num1, num2;

    printf("infome dois numeros: ");
    scanf ("%f %f\n",&num1,&num2);

    soma = num1 + (num2);
    printf ("%.2f\n",soma);
    return soma;
}
float subtracao_dois_num(){
    float subtracao, num1,num2;

    printf("infome dois numeros: ");
    scanf ("%f %f\n",&num1,&num2);

    subtracao = num1 - (num2);
    printf ("%.2f\n",subtracao);
    return subtracao;
}
float mult_dois_num(){
    float mult,num1,num2;

    printf("infome dois numeros: ");
    scanf ("%f %f",&num1,&num2);

    mult= (num1)*(num2);
    printf ("%.2f\n",mult);

    return mult;
}
double div_dois_num(){
    double div,num1,num2;

    printf("infome dois numeros: ");
    scanf ("%lf %lf",&num1,&num2);
    if (num2 == 0){
        printf("Erro!");
        return 0;
    }

    div = (num1)/(num2);
    printf ("%.2lf\n",div);

    return div;
}
int main(){
    char opcao;

    while (1){// while(1) é um loop "infito"
        printf("1. Somar dois numeros.\n");
        printf("2. Subtrair dois numeros.\n");
        printf("3. Multiplicar dois numeros.\n");
        printf("4. Dividir dois numeros.\n");
        printf("5. Sair.\n");
        scanf(" %c",&opcao);

        switch (opcao){
        case '1':
            soma_dois_num();
            break;
        case '2':
            subtracao_dois_num();
            break;
        case '3':
            mult_dois_num();
            break;
        case '4':
            div_dois_num();
            break;
        case '5':
            return 0;
        default:
        printf("Opcao invalida! Tente novamente.\n");
        break;}
        }     
    return 0;
}    
