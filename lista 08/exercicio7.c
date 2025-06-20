#include <stdio.h>

int main() {
    int numeros[5];
    int i, j;
    int ja_verificado[5] = {0}; 

   
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }  for (i = 0; i < 5; i++) {
             if (ja_verificado[i])
                continue; 

                int count = 1;
                for (j = i + 1; j < 5; j++) {
                if (numeros[i] == numeros[j]) {
                    count++;
                    ja_verificado[j] = 1; 
                 }
             }

            if (count > 1) {
            printf("O número %d aparece %d vezes\n", numeros[i], count);
        }
    }

    return 0;
}
