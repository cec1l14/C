#include <stdio.h>

int main(){

    int n, i;
    int mult = 0;

    printf("Infome um valor: \n");
    scanf("%d", &n);

    printf("Tabuada de %d\n", n);

    for(i=1; i<21; i++){
        mult = (n*i);
        printf("%d x %d: %d\n", n, i, mult);
    }

    return 0;
}