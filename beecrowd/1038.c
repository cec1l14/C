#include <stdio.h>

int main(){

    int cod, quant;
    double total;
    
    scanf("%d %d", &cod, &quant);

    if (cod == 1){
        total = (quant * 4.0);
    } else if (cod == 2){
        total = (quant * 4.50);
    } else if (cod == 3){
        total = (quant * 5.0);
    } else if (cod == 4){
        total = (quant * 2.0);
    } else{
        total = (quant * 1.5);
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}