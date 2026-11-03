#include <stdio.h>

int main(){

    int v[10], pos[10], neg[10];
    int quant_p = 0, quant_n = 0, quant_z = 0;

    for(int i=0, i_pos = 0, i_neg = 0; i < 10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &v[i]);

        if(v[i] > 0){
            quant_p++;
            pos[i_pos] = v[i];
            i_pos++;
        } else if(v[i] < 0){
            quant_n++;
            neg[i_neg] = v[i];
            i_neg++;
        } else{
            quant_z++;
        }
    }

    printf("Vetor original:\n");
    for(int i=0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Vetor positivo:\n");
    for(int i=0; i < quant_p; i++){
        printf("%d ", pos[i]);
    }
    printf("\n");

    printf("Vetor negativo:\n");
    for(int i=0; i < quant_n; i++){
        printf("%d ", neg[i]);
    }
    printf("\n");

    printf("Quantidade de zeros: %d\n", quant_z);
    return 0;
}