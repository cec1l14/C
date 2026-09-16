#include <stdio.h>

int main(){

    double media;
    scanf("%lf", &media);

    if (media >= 7.0){
        printf("Aprovado\n");
    } else if (media >= 4.0){
        printf("Final\n");
    } else{
        printf("Reprovado\n");
    }
    return 0;
}