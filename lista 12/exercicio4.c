#include <stdio.h>
#include <stdlib.h>

int main(){
    int *n;
    char *c;
    float *f;
    n= (int*)malloc(sizeof(int));
    if(n==NULL){
        return 1;
    }
    c= (char*)malloc(sizeof(char));
    if(c==NULL){
        return 1;
    }
    f= (float*)malloc(sizeof(float));
    if(f==NULL){
        return 1;
    }
    printf("Informe um numero inteiro,um caractere e um numero real. ");
    scanf("%d %c %f\n",n,c,f);
    printf("%d %c %.2f",*n,*c,*f);
    printf("%p %p %p",(void *)n,(void *)c,(void *)f);
    free(n);
    free(c);
    free(f);
    return 0;
}