#include <stdio.h>
#include <math.h>

int main () {
    float a,b,c,y;
    
    printf("coloque os valores de a,b,c , respectivamente: ");
    scanf("%f %f %f", &a,&b,&c);

    y= a+ (b/(c+a)) + 2*a - 2*b + log2(64);

    printf("o valor de y na expressao, y= a+ (b/c+a) + 2*a - 2*b + log2(64), e: %.2f \n", y);
    return 0;
}
