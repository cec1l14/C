#include <stdio.h>

int main(){

    float x, y;

    printf("Informe as coordenadas do ponto: \n");
    scanf("%f %f", &x, &y);

    if((x == 0) && (y == 0)){
        printf("Origem\n");
    } else if((x == 0) && (y != 0)){
        printf("Eixo Y\n");
    } else if((x != 0) && (y == 0)){
        printf("Eixo X\n");
    } else if((x > 0) && (y > 0)){
        printf("Quadrante 1\n");
    } else if((x < 0) && (y > 0)){
        printf("Quadrante 2");
    } else if((x < 0) && (y < 0)){
        printf("Quadrante 3");
    } else{
        printf("Quadrante 4");
    }

    return 0;
}