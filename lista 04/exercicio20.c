#include <stdio.h>

int main(){
    char opcao;
    float salario=0.0,decimoterc;
    int numerom;
    do{
    printf("Menu de opcoes\n");
    printf("1. Novo salario\n");
    printf("2. Ferias\n");
    printf("3. Decimo terceiro\n");
    printf("4. Sair\n");
    scanf(" %c",&opcao);

    switch (opcao){
    case '1':
    printf("informe o salario atual: \n");
    scanf("%f",&salario);
    if (salario<=999){
        salario= salario*1.15;
    } else if (salario<=2000){
        salario=salario*1.1;
    } else {
        salario=salario*1.05;
    } printf ("Novo salario %.2f\n",salario);  
        break;
    case '2':
    printf("Informe o salario:\n");
    scanf("%f",&salario);
    salario= salario+ salario/3;
    printf("O valor recebido nas ferias sera: %.2f\n",salario);
    break;
    case '3':
    printf("Informe o salario:\n");
    scanf("%f",&salario);
    printf("Informe o numero de meses trabalhado: \n");
    scanf("%d",&numerom);
    if (numerom>12){
        printf("Erro!,envie um valor valido.");
    } else  {
    decimoterc= (numerom*salario)/12;

    printf("O valor do decimo terceiro sera: %.2f\n",decimoterc);
    }
    break;
    
    case '4':
    printf("Fim do programa.\n");
    break;

    default:
    printf("opcao invalida.\n");
    break;
    } 
    } while (opcao!='4');
    return 0;
}