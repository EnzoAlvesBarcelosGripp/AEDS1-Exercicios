#include <stdio.h>

int main(){
    int num1, num2;

    printf(" digite dois numeros");
    scanf("%d %d",&num1 ,&num2);

    if (num1 == num2){
        printf("esses numeros sao identicos");
    } else {
        printf(" o maior entre eles e %d",( num1>num2) ? num1 : num2);   
    }
    return 0;
}
