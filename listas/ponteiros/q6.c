#include <stdio.h>

void giraTres(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;

    printf("A = %d\n", *a);
    printf("B = %d\n", *b);
    printf("C = %d\n", *c);
}

int main(){
    int a, b, c;

    printf("Informe os valores para a, b e c:\n");
    scanf("%d %d %d", &a, &b, &c);

    giraTres(&a, &b, &c);

    return 0;
}