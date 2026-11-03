#include <stdio.h>

void reduz(int *a, int *b){
    int quant = 0;

    while(1){
        if(*a == *b){
            break;
        } else{
            if(*a > *b){
                *a = *a - *b;
                quant += 1;
            } else{
                *b = *b - *a;
                quant += 1;
            }
        }
    }

    printf("Quantidade de execucoes: %d\n", quant);
}
int main(){
    int a, b;

    printf("Informe os valores de a e b:\n");
    scanf("%d %d", &a, &b);

    reduz(&a, &b);

    return 0;
}