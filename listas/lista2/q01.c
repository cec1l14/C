#include <stdio.h>

float celsiusParaFahrenheit(float c){
    float f;

    f = ((c * 1.8) + 32);

    return f;
}

float fahrenheitParaCelsius(float f){
    float c;

    c = ((f - 32)/1.8);

    return c;
}
int main(){
    float c, f, r1, r2;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &c);

    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%f", &f);

    r1 = celsiusParaFahrenheit(c);
    r2 = fahrenheitParaCelsius(f);

    printf("%.2f C equivale a %.2f F\n", c, r1);
    printf("%.2f F equivale a %.2f C\n", f, r2);

    return 0;
}

