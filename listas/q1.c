#include <stdio.h>

float celsiusParaFahrenheit(float c){
    return ((c * 1.8) + 32);
}
float fahrenheitParaCelsius(float f){
    return ((f - 32)/(1.8));
}

int main(){

        float t1, t2, r1, r2;
        
        printf("Temperatura em Celsius: \n");
        scanf("%f", &t1);
        r1 = celsiusParaFahrenheit(t1);

        printf("Resultado em Fahrenheit: %.1f\n", r1);

        printf("Temperatura em Fahrenheit: \n");
        scanf("%f", &t2);
        r2 = fahrenheitParaCelsius(t2);

        printf("Resultado em Celsius: %.1f\n", r2);


    return 0;
}

