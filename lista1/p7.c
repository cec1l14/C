#include <stdio.h>

int main(){

    int a, b, c, maior, menor, medio;

    printf("Informe tres valores: \n");
    scanf("%d %d %d", &a, &b, &c);

    if((a > b) && (a > c)){
        maior = a;
        if((b>c)){
            medio = b;
            menor = c;
        } else{
            medio = c;
            menor = b;
        }
    } else if((b > a) && (b > c)){
        maior = b;
        if((a > c)){
            medio = a;
            menor = c;
        } else{
            medio = c;
            menor = a;
        }
    } else{
        maior = c;
        if((b > a)){
            medio = b;
            menor = a;
        } else{
            medio = a;
            menor = b; 
        }
    } 

    printf("Valores na ordem crescente: %d  %d  %d\n", menor, medio, maior);
    printf("Valores na ordem original: %d  %d  %d\n", a, b, c);

    return 0;
}