#include <stdio.h>

int main(){

    int A, B, C, menor, medio, maior;

    scanf("%d %d %d", &A, &B, &C);

    if ((A > B) && (A > C)){
        maior = A;
        if (B > C){
            medio = B;
            menor = C;
        } else{
            medio = C;
            menor = B;
        }
    } else if ((B > A) && (B > C)){
        maior = B;
        if (A > C){
            medio = A;
            menor = C;
        } else{
            medio = C;
            menor = A;
        }
    } else{
        maior = C;
        if (B > A){
            medio = B;
            menor = A;
        } else{
            medio = A;
            menor = B;
        }
    }

    printf("%d\n", menor);
    printf("%d\n", medio);
    printf("%d\n", maior);
    printf("\n");

    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

    return 0;
}