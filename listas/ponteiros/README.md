# Ponteiros e Parâmetros de Saída em C

1. **`minMax`**: Recebe três valores inteiros e retorna, através de dois parâmetros de saída (`min` e `max`), o menor e o maior valor entre eles.
   - *Assinatura:* `void minMax(int a, int b, int c, int *min, int *max);`

2. **`trocaSeMaior`**: Troca os valores apontados por `a` e `b` apenas se `*a > *b`.
   - *Assinatura:* `void trocaSeMaior(int *a, int *b);`

3. **`divmod`**: Recebe um dividendo e um divisor (diferente de zero) e calcula simultaneamente o quociente e o resto da divisão inteira via parâmetros de saída.
   - *Assinatura:* `void divmod(int dividendo, int divisor, int *quociente, int *resto);`

4. **`atualizaConta`**: Simula operações bancárias de depósito (`'D'`/`'d'`) e saque (`'S'`/`'s'`). Saldo funciona como parâmetro de entrada e saída. Contempla validações de saldo insuficiente, operações e valores inválidos.
   - *Assinatura:* `void atualizaConta(float *saldo, float valor, char operacao);`

5. **`trocaPositivos`**: Troca os valores de duas variáveis somente se ambos forem estritamente positivos. Retorna `1` se a troca ocorreu e `0` caso contrário.
   - *Assinatura:* `int trocaPositivos(int *a, int *b);`

6. **`giraTres`**: Executa uma rotação circular entre três variáveis (`a` $\leftarrow$ `b`, `b` $\leftarrow$ `c`, `c` $\leftarrow$ `a`) utilizando apenas os ponteiros informados e uma variável auxiliar.
   - *Assinatura:* `void giraTres(int *a, int *b, int *c);`

7. **`estatisticaPositivos`**: Processa seis números reais e devolve, via parâmetros de saída, a contagem de números positivos e a média simples desses valores positivos. Trata o caso onde nenhum valor positivo é fornecido.
   - *Assinatura:* `void estatisticaPositivos(float v1, float v2, float v3, float v4, float v5, float v6, int *qtd, float *media);`

8. **`reduz`**: Aplica o algoritmo de subtrações sucessivas até que `*a == *b`, modificando os valores originais por referência e imprimindo o número total de operações realizadas.
   - *Assinatura:* `void reduz(int *a, int *b);`

9. **`ordena3`**: Reorganiza os valores de três variáveis em ordem crescente diretamente na memória, sem utilizar vetores, permitindo a exibição tanto dos valores ordenados quanto dos originais.
   - *Assinatura:* `void ordena3(int *a, int *b, int *c);`
