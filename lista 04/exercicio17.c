#include <stdio.h>

int main(){
    float coordenadax,coordenaday;
    do{ 
        printf("Informe a coordenada de 'x': ");
        scanf("%f",&coordenadax);
        printf("Informe a coordenada de 'y': ");
        scanf("%f",&coordenaday);
        if (coordenadax==0 && coordenaday==0){
         break;
        }
        if  (coordenadax > 0 && coordenaday > 0)
        {
            printf("Primeiro quadrante.\n");
        } else if (coordenadax < 0 && coordenaday > 0) {
            printf("segundo quadrante.\n");
        } else if (coordenadax < 0 && coordenaday < 0) {
            printf("terceiro quadrante.\n");
        } else {
            printf("quarto quadrante\n");
        }
    } while (!(coordenadax==0.0 && coordenaday==0.0));
    return 0;
}