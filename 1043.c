#include <stdio.h>

int main(){

    double A, B, C, per, area;

    scanf("%lf %lf %lf", &A, &B, &C);
    
    if ((A < (B + C)) && (B < (A + C)) && (C < (A + B))){
        per = A + B + C;
        printf("Perimetro = %.1lf\n", per);
    } else{
        area = ((A + B) * C)/2.0;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}