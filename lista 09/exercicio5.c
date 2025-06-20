#include <stdio.h>
#define tam 10
void preenche(int *v){
    printf("Vetor: \n");
    for (int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }return;
}
void negativos(int *v,int *neg,int *vn){
    for (int i=0;i<tam;i++){
        if (v[i]<0){
            vn[*neg]=v[i];
            (*neg) ++;
        } 
    }vn[*neg]=0;
    return;
}
int main (){
    int v[tam],neg=0,vn[tam];
    preenche(v);
    negativos(v,&neg,vn);
    printf("vetor neg: \n");
    for (int i=0;i<neg+1;i++){
        printf("%d ",vn[i]);
    }return 0;
}