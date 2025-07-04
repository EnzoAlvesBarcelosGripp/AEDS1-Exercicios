#include <stdio.h>


int main () {
    int min, hora, horap, minp;  

    printf("informe as horas e os minutos, de forma separada, respctivamente: ");
    scanf ("%d %d", &hora, &min);

    minp = horap * 60 + min;

    printf("passaram %d h, desde o inincio do dia\n", hora);
    printf("passaram %d min, desde o inicio do dia\n",minp);

    return 0;
}
