#include <stdio.h>

void piramide_invertida(int n){
    for(int i=n;i>0;i--){
        for (int J=1; J<=i; J++){
            printf ("%d",J);
        }
        printf("\n");
    }
    return;
}
int main(){
    int n;

    printf("Entrada: ");
    scanf("%d",&n);
    printf("Saida:\n");

    piramide_invertida(n);
    
    return 0;
}