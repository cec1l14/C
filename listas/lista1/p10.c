#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, raiz1, raiz2;

    printf("Informe tres valores: \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b,2) - (4*a*c));

    if((a == 0) || (delta < 0)){
        printf("Impossivel calcular");
    } else{
        raiz1 = (((-b) + sqrt(delta))/(2*a));
        raiz2 = (((-b) - sqrt(delta))/(2*a));

        printf("As raizes sao: %.2f %.2f", raiz1, raiz2);
    }

    return 0;
}