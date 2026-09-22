#include <stdio.h>

void atualizaConta(float *saldo, float valor, char operacao) {
    if (operacao == 'd' || operacao == 'D') {
        if (valor <= 0) {
            printf("Nao eh possivel realizar a operacao.\n");
        } else {
            *saldo += valor;
            printf("Operacao realizada. Saldo = %.3f\n", *saldo);
        }
    } else if (operacao == 's' || operacao == 'S') {
        if (valor <= 0 || valor > *saldo) {
            printf("Nao eh possivel realizar a operacao.\n");
        } else {
            *saldo -= valor;
            printf("Operacao realizada. Saldo = %.3f\n", *saldo);
        }
    } else {
        printf("Operacao invalida.\n");
    }
}

int main() {
    float saldo = 0.0, valor = 0.0;
    char operacao;

    while (1) {
        printf("'P' -> parar\n");
        printf("'D' -> depositar\n");
        printf("'S' -> sacar\n");
        printf("\nInforme a operacao:\n");
    
        scanf("%c", &operacao);

        if (operacao == 'p' || operacao == 'P') {
            printf("Fim do programa.\n");
            break; 
        } else{

        printf("Informe o valor:\n");
        scanf("%f", &valor);

        atualizaConta(&saldo, valor, operacao);
        }
    }

    return 0;
}