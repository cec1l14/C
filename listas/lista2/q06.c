#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k){

    int i, soma = 0;

    for(i=inicio; i<(fim+1); i++){
        if((i%k) == 0){
            soma += i;
        }
    }

    return soma;

}

int main(){

    int inicio, fim, k, result;

    printf("Informe o intervalo: \n");
    scanf("%d %d", &inicio, &fim);
    printf("Informe o valor a ser considerado: \n");
    scanf("%d", &k);

    result = somaMultiplos(inicio, fim, k);

    printf("A soma dos multiplos entre [%d,%d] equivale a %d\n", inicio, fim, result);


    return 0;
}