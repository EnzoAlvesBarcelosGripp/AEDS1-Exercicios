#include<stdio.h>
int main (){
    int vet1[10],vet2[10],vet_inter[10],count =0;
    printf("Entrada: \n");
    for (int i = 0; i<10;i++){
        printf("%d numero do vet1 e vet 2:",i);
        scanf("%d %d",&vet1[i],&vet2[i]);
    }
    for (int i = 0; i < 10; i++){
       for (int j=0; j <10 ; j++){
            if (vet1[i] == vet2 [j]){
                int ja_existe = 0;
                for (int k = 0; k < count; k++) {
                    if (vet_inter[k] == vet1[i]) {
                        ja_existe = 1;
                        break;
                    }
                 }
            }
         }
    } 
    printf("Vetor interseção: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", vet_inter[i]);
    }
    printf("\n");

    return 0;
}