#include <stdio.h>

int main(){

    int dist;
    float comb, consumo;

    printf("Informe a distancia e o combustivel gasto: \n");
    scanf("%d %f", &dist, &comb);

    consumo = (dist/comb);

    printf("%.3f km/l", consumo);

    return 0;
}