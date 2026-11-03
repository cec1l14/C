#include <stdio.h>

void ordena3(int *a, int *b, int *c){
    int max, meio, min;

    if((*a > *b) && (*a > *c)){
        max = *a;
        if(*b > *c){
            meio = *b;
            min = *c;
        } else{
            meio = *c;
            min = *b;
        }
    } else if((*b > *a) && (*b > *c)){
        max = *b;
        if(*a > *c){
            meio = *a;
            min = *c;
        } else{
            meio = *c;
            min = *a;
        }
    } else{
        max = *c;
        if(*a > *b){
            meio = *a;
            min = *b;
        } else{
            meio = *b;
            min = *a;
        }
    }
    printf("Valores ordenados: %d %d %d\n", min, meio, max);
    printf("Valores originais: %d %d %d\n", *a, *b, *c);
}
int main(){
    int a, b, c;

    printf("Informe os valores de a, b e c:\n");
    scanf("%d %d %d", &a, &b, &c);

    ordena3(&a, &b, &c);

    return 0;
}