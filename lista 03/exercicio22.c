# include <stdio.h>

int main (){
    char opcao;
    double Gt=9.807,Gv=8.87,Gm=3.7, vt,t; //vt= v(t); t=tempo de queda.

    printf("Informe o tempo de queda em milissegundos: ");
    scanf(" %lf",&t);
    
    printf("escolha um planeta:\n");
    printf("Terra (T)\n");
    printf("Venus (V)\n");
    printf("Mercurio (M)\n");
    scanf(" %c", &opcao); 

    t= t/1000.0;

    switch (opcao) {
        case 'T': 
        vt = Gt * t ;
        printf("A velocidade de queda neste instante %.2lf\n",vt);
        break;
    
        case 'V':
        vt = Gv * t ;
        printf("A velocidade de queda neste instante %.2lf\n",vt);
        break;

        case 'M':
        vt = Gm * t;
        printf("A velocidade de queda neste instante %.2lf\n",vt);
        break;

        default:
        printf("caractere invalido\n");
        break;
    } 
    return 0;
}
