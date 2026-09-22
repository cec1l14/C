#include <stdio.h>

int somaImpar(int x, int y){

    int i, soma = 0;

    if(y > x){
        for(i=x; i<(y+1); i++){
            if((i%2) != 0){
                soma += i;
            }
        }
    }else{
        for(i=y; i<(x+1); i++){
            if((i%2) != 0){
                soma += i;
            }
        }
    }

    return soma;
}

int main(){

    int x, y, result;

    printf("Informe os valores do intervalo: \n");
    scanf("%d %d", &x, &y);

    result = somaImpar(x, y);

    printf("A soma dos numeros impares em [%d,%d] equivale a %d\n", x, y, result);

    return 0;
}