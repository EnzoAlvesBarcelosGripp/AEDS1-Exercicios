#include <stdio.h>

int main(){
  int A,B,C;
  
  printf("digite os valores de A,B,C , respectivamente: ");
  scanf("%d %d %d",&A ,&B ,&C);

  if ((A%B == 0) && (A%C == 0)){
    printf("divisel por ambos");
  } else if ((A%B == 0) || (A%C == 0)){
    printf("divisel apenas por um deles");
  } else if ((B < 0) || (C < 0)) {
    printf("valor invalido");
  } else {
    printf ("nao e divisivel");
  }
  return 0;
}
