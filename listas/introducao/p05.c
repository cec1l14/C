#include <stdio.h>
#include <math.h>

int main(){

    float raio, volume, pi = 3.14159;

    printf("Informe o valor do raio: \n");
    scanf("%f", &raio);

    volume = (((4/3.0)*pi*pow(raio,3)));

    printf("Volume: %.3f", volume);

    return 0;
}