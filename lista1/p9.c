#include <stdio.h>

int main(){

    float salario, percentual, reajuste;

    printf("Informe o salario: \n");
    scanf("%f", &salario);

    if(salario < 1500){
        percentual = 20;
        reajuste = (0.2 * salario);
        salario += reajuste;
    } else if(salario < 5000){
        percentual = 15;
        reajuste = (0.15 * salario);
        salario += reajuste;
    } else{
        percentual = 10;
        reajuste = (0.1 * salario);
        salario += reajuste;
    }

    printf("Novo salario: %.3f\n", salario);
    printf("Reajuste: %.3f\n", reajuste);
    printf("Percentual: %.2f\n", percentual);

    return 0;
}