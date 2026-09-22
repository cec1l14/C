#include <stdio.h>

void divmod(int dividendo, int divisor, int *quociente, int *resto){
    if(divisor == 0){
        printf("Nao eh possivel dividir por 0\n");
    } else{
        *quociente = (dividendo/divisor);
        *resto = (dividendo%divisor);

        printf("Quociente: %d\n", *quociente);
        printf("Resto: %d\n", *resto);
    }
}

int main(){
    int dividendo, divisor;
    int quociente, resto;

    printf("Informe os valores do dividendo e divisor:\n");
    scanf("%d %d", &dividendo, &divisor);

    divmod(dividendo, divisor, &quociente, &resto);

    return 0;
}