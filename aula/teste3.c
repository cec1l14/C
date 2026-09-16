#include <stdio.h>

int main(){

    float bruto, desconto, liquido;

    scanf("%f", &bruto);

    if (bruto <= 420.0){
        desconto = (bruto * 0.08);
        liquido = (bruto - desconto);
    } else if (bruto <= 1350.0){
        desconto = (bruto * 0.9);
        liquido = (bruto - desconto);
    } else{
        desconto = (bruto * 0.1);
        liquido = (bruto - desconto);
    }

    printf("Desconto: %f\n", desconto);
    printf("Salário Líquido: %f\n", liquido);

    return 0;
}