#include <stdio.h>

int main(){

    int N, horas = 0, min = 0, seg = 0;

    scanf("%d", &N);

    horas = N/3600;
    min = (N%3600)/60;
    seg = (N%3600)%60;

    printf("%d:%d:%d\n", horas, min, seg);

    return 0;
}