#include <stdio.h>

void reduz(int *a, int *b){
    int qtd = 0;
    while (*a != *b){
        if(*a > *b){
            *a = *a - *b;
            qtd++;
    
        } else if (*b > *a){
            *b = *b - *a;
            qtd++;
        }
    }
    
    printf("Quantidade: %d\n", qtd);
}


int main(){

    int a, b;
    
    scanf("%d %d", &a, &b);
    reduz(&a, &b);

    return 0;
}