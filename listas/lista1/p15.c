#include <stdio.h>

int main(){

    int n, x, y, i;
    float divisao;

    printf("Informe n: \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Informe X e Y: \n");
        scanf("%d %d", &x, &y);
        
        if(y == 0){
            printf("Divisao impossivel\n");
        } else{
            divisao = ((float)x/y);
            printf("Divisao entre %d e %d = %.2f\n", x, y, divisao);
        }
    }

    return 0;
}