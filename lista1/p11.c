#include <stdio.h>

int main(){

    int a, b, i;
    int soma = 0;

    printf("Informe dois valores: \n");
    scanf("%d %d", &a, &b);

    for(i=(a+1); i<b; i++){
        if((i%2) != 0){
            soma += i;
        }
    }

    printf("Soma: %d", soma);

    return 0;
}