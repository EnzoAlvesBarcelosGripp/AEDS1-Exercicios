#include <stdio.h>

int main(){
    float num,percentualp,percentualn;
    float quantidadep=0.0,quantidaden=0.0;

    do
    {
        printf("informe o numero, sendo (0) para parar o sistema: \n");
        scanf("%f", &num);

        if (num<0 && num!=0){
            quantidaden ++;
        } else if (num>0 && num!=0){
            quantidadep ++;
        }
    } while (num!=0);
    percentualn = (quantidaden/(quantidadep + quantidaden));
    percentualp = (quantidadep/(quantidadep + quantidaden));

    printf("A quantidade de valores positivos foi: %2.f\n",quantidadep);
    printf("A quantidade de valores negativos foi: %2.f\n",quantidaden);
    printf("O percentual de numeros negativos foi: %.2f\n",percentualn);
    printf("O percentual de numeros positivos foi: %.2f\n",percentualp);
    
    return 0;
}