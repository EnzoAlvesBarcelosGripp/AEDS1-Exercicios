#include <stdio.h>

int main(){
    int num;
    do
    {
    printf("digite o numero: \n");
    scanf("%d",&num);
    if (num%2==0 && num!=0){
        printf ("o numero %d eh: par\n",num);
    } else if(num !=0) {
        printf ("o numero %d eh: impar\n",num);    
    } 

    } while (num!=0);
    return 0;
}