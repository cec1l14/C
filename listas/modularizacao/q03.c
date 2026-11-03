#include <stdio.h>

char classificaIMC(float peso, float altura){

    float imc;

    imc = ((peso)/(altura*altura));

    if (imc < 18.5){
        return 'A';
    } else if (imc < 25){
        return 'N';
    } else if (imc < 30){
        return 'S';
    } else{
        return 'O';
    }
}
int main(){

    float peso, altura;
    char result;

    printf("Digite o peso: \n");
    scanf("%f", &peso);

    printf("Digite a altura: \n");
    scanf("%f", &altura);

    result = classificaIMC(peso, altura);

    if (result == 'A'){
        printf("Abaixo do peso\n");
    } else if (result == 'N'){
        printf("Peso normal\n");
    } else if (result == 'S'){
        printf("Sobrepeso\n");
    } else{
        printf("Obesidade\n");
    }

    return 0;
}