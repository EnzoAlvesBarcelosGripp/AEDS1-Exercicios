#include <stdio.h>
int main(){
    int a,b,maior,menor;
    printf("Informe 2 numeros:");
    scanf("%d %d",&a,&b);
    if (a>b){
        maior=a;
        menor=b;
    } else if (b>a){
        maior=b;
        menor=a;
    } else {
        printf("Erro!");
        return 0;
    }for (int i=menor;i<=maior;i++){
        if(i%2!=0){
            printf("%d ",i);
        }}return 0;
}