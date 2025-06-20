#include <stdio.h>

int maior(int a,int b){
    if (a>b){
        return a;
    } else if(b>a){
        return b;
    }
}
int main(){
    int a,b;
    printf("informe 2 numeros diferentes: ");
    scanf("%d %d",&a,&b);
    printf("maior=%d",maior(a,b));
    return 0;
}