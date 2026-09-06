#include <stdio.h>

int main(){

    char nome;
    double salario, montante, result;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &montante);

    result = ((0.15 * montante) + salario);

    printf("TOTAL = R$ %.2lf\n", result);

    return 0;
}