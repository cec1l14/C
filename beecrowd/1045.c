#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, maior, medio, menor;

    scanf("%d %d %d", &A, &B, &C);

        if ((A > B) && (A > C)){
        maior = A;
        if (B > C){
            medio = B;
            menor = C;
        } else{
            medio = C;
            menor = B;
        }
    } else if ((B > A) && (B > C)){
        maior = B;
        if (A > C){
            medio = A;
            menor = C;
        } else{
            medio = C;
            menor = A;
        }
    } else{
        maior = C;
        if (B > A){
            medio = B;
            menor = A;
        } else{
            medio = A;
            menor = B;
        }
    }

    if (maior >= (medio + menor)){
        printf("NAO FORMA TRIANGULO\n");
    } else if (pow(maior, 2) == (pow(medio, 2) + pow(menor, 2))){
        printf("TRIANGULO RETANGULO");
    } else if (pow(maior, 2) > (pow(medio, 2) + pow(menor, 2))){
        printf("TRIANGULO OBTUSANGULO");
    } else if (pow(maior, 2) < (pow(medio, 2) + pow(menor, 2))){
        printf("TRIANGULO ACUTANGULO");
    } else if (maior == medio == menor){
        printf("TRIANGULO EQUILATERO");
    } else if (((maior == menor) && (maior != medio)) || ((maior == medio) && (maior != menor)) || ((medio == menor) && (medio != maior))){
        printf("TRIANGULO ISOSCELES");
    }
    return 0;
}