#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int v[10],vpar[10], qpar=0;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        v[i]= rand()%20+5;
    }
    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0) {
            vpar[qpar]= v[i];
            qpar ++;
        }
    }
    printf("Vetor original:");
    for (int i=0; i<10;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    printf("Vetor de pares:");
    for (int i=0; i<qpar;i++){
        printf("%d ",vpar[i]);
    }
    return 0;
}