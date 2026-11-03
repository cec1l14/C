#include <stdio.h>

int somaDigitos(int n){
    int soma = 0;

    while(n > 0){
        soma += (n%10);
        n /= 10;
    }

    return soma;
}

int main(){

    int n, result;
    printf("Informe um valor para n: \n");
    scanf("%d", &n);

    result = somaDigitos(n);
    printf("A soma dos digitos de %d eh %d", n, result);

    return 0;
}