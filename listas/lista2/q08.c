#include <stdio.h>
#include <math.h>

double termoLinear(double a, double x){
    double r;

    r = (a * x);

    return r;
}

double termoQuadratico(double b, double x){
    double r2;

    r2 = (b * pow(x, 2));

    return r2;
}

double termoCubico(double c, double x){
    double r3;

    r3 = (c * pow(x, 3));

    return r3;
}

double avalia(double a, double b, double c, double x){
    double conta;

    conta = (termoLinear(a, x) + termoQuadratico(b, x) + termoCubico(c,x));

    return conta;
}

int main(){
    double a, b, c, x, result;

    printf("Informe os valores de a, b, c e x: \n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &x);

    result = avalia(a, b, c, x);

    printf("O resultado do polinomio eh: %.2lf", result);

    return 0;
}