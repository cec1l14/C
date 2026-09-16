#include <stdio.h>

int main(){

    int N, c100, c50, c20, c10, c5, c2, c1;

    scanf("%d", &N);

    c100 = (N/100);
    c50 = ((N%100)/50);
    c20 = (((N%100)%50)/20);
    c10 = ((((N%100)%50)%20)/10);
    c5 = (((((N%100)%50)%20)%10)/5);
    c2 = ((((((N%100)%50)%20)%10)%5)/2);
    c1 = ((((((N%100)%50)%20)%10)%5)%2);

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);

    return 0;
}