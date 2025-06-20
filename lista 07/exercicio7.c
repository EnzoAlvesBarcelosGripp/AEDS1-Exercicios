#include <stdio.h>
int potencia(int a,int b){
    if (b==0){
        return 1;
    }
    return a*potencia(a,b-1);
}
int main(){
    int a,b;
    printf("digite 2 numeros:");
    scanf("%d %d",&a,&b);
    printf ("O valor da potencia eh: %d",potencia(a,b));
    return 0;
}