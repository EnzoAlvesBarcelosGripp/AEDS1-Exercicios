#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define Max 1000
int main (){
    int *v;
    v = (int *)malloc(Max *sizeof(int));
    if (v == NULL){
        return 1;
    }
    srand(time(NULL));
    for (int  i = 0; i < Max ; i++){    
        v[i] = rand()%10 +1 ;
        printf("%d ",v[i]);
    }
    free(v);
    return 0;
}