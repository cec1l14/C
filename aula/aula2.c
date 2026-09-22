#include <stdio.h>

int main(){

    float vetor[10];
    float soma = 0;
    float media = 0;
    int i;

    for (i=0; i<10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    
    media = (soma/10);

    for (i=0; i<10; i++){
        if (vetor[i] > media){
            printf("%d\n", vetor[i]);
        }
    }
    }
    return 0;
}