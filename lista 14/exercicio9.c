#include <stdio.h>
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    char nome [50];
    int idade;
    char sexo;
    char cpf[11];
    Data nascimento;
    int codigo;
    char cargo[30];
    float salario;
}Funcionario;
int main (){
    Funcionario f1;
    printf("Informe o nome do funcionario: \n");
    fgets(f1.nome,sizeof(f1.nome),stdin);
    printf("Informe a idade do(a) %s\n",f1.nome);
    scanf("%d",&f1.idade);
    printf("Informe o sexo do(a) %s\n",f1.nome);
    fgets(f1.nome,sizeof(f1.nome),stdin);
    printf("Informe o cpf da(a) %s \n",f1.nome);
    fgets(f1.cpf,sizeof(f1.cpf),stdin);
    printf("Informe a data de nascimento DD/MM/AA do(a) %s: \n",f1.nome);
    scanf("%d %d %d",&f1.nascimento.dia,&f1.nascimento.mes,&f1.nascimento.ano);
    printf("Informe o codigo do setor onde trabalha (entre 0 e 99) do(a) %s: \n",f1.nome);
    scanf("%d",&f1.cargo);
    if (f1.cargo < 0 || f1.cargo >= 100){
        printf("Erro numero fora do intervalo [0.99], por favor tente novamente: \n");
        return 0;
    }
    printf("informe o cargo do(a) %s : \n",f1.nome);
    fgets(f1.cargo,sizeof(f1.cargo),stdin);
    printf("infome o salario do(a) %s\n",f1.nome);
    scanf("%f",&f1.salario);

    printf(" Resultados: \n");
    printf("Nome: %s \n",f1.nome);
    printf("Idade: %d ",f1.idade);
    printf("Sexo: %c",f1.sexo);
    printf("CPF: %s",f1.cpf);
    printf("Data de nascimento: %d/%d/%d",f1.nascimento.dia,f1.nascimento.mes,f1.nascimento.ano);
    printf("Codigo onde trabalha: %d",f1.codigo);
    printf("Cargo: %s",f1.cargo);
    printf("Salario: %.2f",f1.salario);
    
    return 0;
}