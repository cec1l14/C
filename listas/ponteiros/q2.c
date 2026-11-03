#include <stdio.h>

void trocaSeMaior(int *a, int *b){
    int temp;

    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }

    printf("A = %d\n", *a);
    printf("B = %d\n", *b);
}

int main(){
    int a, b;

    printf("Informe os valores de a e b: \n");
    scanf("%d %d", &a, &b);

    trocaSeMaior(&a, &b);


    return 0;
}