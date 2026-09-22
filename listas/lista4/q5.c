#include <stdio.h>

int trocaPositivos(int *a, int *b){
    int temp;
    if((*a > 0) && (*b > 0)){
        *a = temp;
        *a = *b;
        *b = temp;

        return 1;
    } else{
        return 0;
    }
}

int main(){
    int a, b, result;

    printf("Informe valores para a e b:\n");
    scanf("%d %d", &a, &b);

    result = trocaPositivos(&a, &b);
    printf("Resultado: %d", result);

    return 0;
}