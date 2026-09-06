#include <stdio.h>

int main(){
    int A, B, C, D, result;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    result = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n", result);

    return 0;
}