#include <stdio.h>

int main() {
    float capacidade, vazao, tempo;
    
    printf("informe a capacidade do reservatorio em L: ");
    scanf("%f", &capacidade);

    printf("informe a vazão da torneira em L/seg: ");
    scanf("%f", &vazao);

    tempo = capacidade/vazao;

    printf("ira demorar %.2f segundos", tempo);

    return 0;
}
