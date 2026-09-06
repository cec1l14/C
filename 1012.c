#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, a1, a2, a3, a4, a5;
    
    scanf("%lf %lf %lf", &A, &B, &C);

    a1 = ((A * C)/2.0);
    a2 = (3.14159 * pow(C, 2));
    a3 = ((A + B) * C)/2.0;
    a4 = (pow(B, 2));
    a5 = (A * B);

    printf("TRIANGULO: %.3lf\n", a1);
    printf("CIRCULO: %.3lf\n", a2);
    printf("TRAPEZIO: %.3lf\n", a3);
    printf("QUADRADO: %.3lf\n", a4);
    printf("RETANGULO: %.3lf\n", a5);

    return 0;
}