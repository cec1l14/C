#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    switch (num){
        case 1:
            puts("Campeao");
            break;
        case 2:
            puts("Bicampeao");
            break;
        case 3: 
            puts("Tricampeao");
            break;
        case 4:
            puts("Tetracampeao");
            break;
        default:
            puts("Valor invalido");
            break;
    }
    return 0;
}