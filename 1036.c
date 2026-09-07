#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, raiz1, raiz2, delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = (pow(B, 2) - (4 * A * C));

    if ((A == 0) || (delta < 0)){
        printf("Impossivel calcular\n");
    }
    else{
        raiz1 = ((-B) + pow(delta, 0.5))/(2 * A);
        raiz2 = ((-B) - pow(delta, 0.5))/(2 * A);

        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }

    return 0;
}