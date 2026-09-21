#include <stdio.h>

float somaImposto(float taxaImposto, float *custo){

    *custo = *custo*(1 + taxaImposto);

    return *custo;

}

int main(){

    float taxa, custo;
    float result;

    printf("Imposto: \n");
    scanf("%f", &taxa);

    printf("Custo: \n");
    scanf("%f", custo);

    result = somaImposto(taxa, &custo);
    printf("Resutaldo = %f", result);



    return 0;
}