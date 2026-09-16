#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3)/3.0;

    if (media >= 9.0){
        puts("Aprovado");
    } 


    return 0;
}