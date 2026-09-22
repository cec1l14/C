#include <stdio.h>

int main(){

    float a, b, media;

    printf("Informe A e B: \n");
    scanf("%f %f", &a, &b);

    media = (((a*3.5)+(b*7.5))/11);

    printf("MEDIA = %.5f", media);

    return 0;
}