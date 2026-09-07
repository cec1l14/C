#include <stdio.h>

int main(){

    int N, anos = 0, meses = 0, dias = 0;

    scanf("%d", &N);

    anos = N/365;
    meses = (N%365)/30;
    dias = (N%365)%30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}