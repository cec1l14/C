#include <stdio.h>

int main(){

    int num, i, maior = 0, pos = 0;

    printf("Digite um numero: \n");
    scanf("%d", &num);
    maior = num; pos = 1;
    
    for(i=2; i<11; i++){
        printf("Digite um numero: \n");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
            pos = i;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Posicao relativa: %d\n", pos);

    return 0;
}