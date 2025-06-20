#include <stdio.h>
int main (){
    float vet[10],con;
    printf("entrada: \n");
    for (int i=0;i<10;i++){
        scanf("%f",&vet[i]);
    }
    for (int i=0;i<9;i++){
        for (int j=0; j<9;j++){
            if (vet[j]> vet [j+1]){
                con = vet [j];
                vet [j] = vet[j+1];
                vet[j+1]= con;
        }    
    }
}
printf("\nVetor ordenado: ");
for (int i = 0; i < 10; i++) {
    printf("%.1f ", vet[i]);
}

printf("\n");
return 0;
}