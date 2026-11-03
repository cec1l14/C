#include <stdio.h>

int main(){

    float distancia, tempo;
    int v1 = 60, v2 = 90;

    printf("Informe o valor da distancia: \n");
    scanf("%f", &distancia);

    tempo = ((distancia/(v1+v2))*60);
    printf("Minutos: %.2f", tempo);

    return 0;
}