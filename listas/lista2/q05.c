#include <stdio.h>

void exibeTabuada(int n){

    int i, mult;

    for(i=1; i<11; i++){
        mult = (n*i);
        printf("%d x %d = %d\n", n, i, mult);
    }

}

int main(){

    int n;

    printf("Informe um valor:\n");
    scanf("%d", &n);

    exibeTabuada(n);

    return 0;
}