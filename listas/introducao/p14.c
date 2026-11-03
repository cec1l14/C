#include <stdio.h>

int main(){

    int m, n, i, soma = 0;

    while(1){

        printf("Informe m e n:\n");
        scanf("%d %d", &m, &n);

        if((m <= 0) || (n <= 0)){
            break;
        } else if(n > m){
            for(i=m; i<(n+1); i++){
                printf("%d\n", i);
                soma += i;
            }
        } else if(m > n){
            for(i=n; i<(m+1); i++){
                printf("%d\n", i);
                soma += i;
            }
        }

        printf("Soma: %d\n", soma);
        soma = 0;
    }
    return 0;
}