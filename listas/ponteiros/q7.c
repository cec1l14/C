#include <stdio.h>

void mediaPositivos(int *a, int *b, int *c, int *d, int *e, int*f, int *soma){
    int quant = 0, media = 0;
    
    if(*a > 0){
        quant += 1;
        *soma += *a;
    } if(*b > 0){
        quant += 1;
        *soma += *b;
    } if(*c > 0){
        quant += 1;
        *soma += *c;
    } if(*d > 0){
        quant += 1;
        *soma += *d;
    } if(*e > 0){
        quant += 1;
        *soma += *e;
    } if(*f > 0){
        quant += 1;
        *soma += *f;
    }

    if(*soma == 0){
        printf("Nao houve valores positivos\n");
    } else{
        media = (*soma/quant);
        printf("Media: %d\n", media);
        printf("Quantidade de valores positivos: %d", quant);
    }

}

int main(){
    int a, b, c, d, e, f, result;
    int soma = 0;

    printf("Informe seis valores:\n");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    mediaPositivos(&a, &b, &c, &d, &e, &f, &soma);

    return 0;
}