# Funções e Modularização 

### Questão 1
Implemente as duas funções puras de conversão de temperatura:
* `float celsiusParaFahrenheit(float c);`
* `float fahrenheitParaCelsius(float f);`

Utilize as relações \(F = \frac{9}{5}C + 32\) e \(C = \frac{5}{9}(F - 32)\). O programa principal deve ler uma temperatura e demonstrar as duas conversões. As funções não devem realizar leitura nem impressão.

### Questão 2
Implemente a função `int diasNoMes(int mes, int ano)`, que retorne o número de dias do mês informado. Considere que um ano é bissexto quando é divisível por 400 ou quando é divisível por 4, mas não por 100. Para um mês inválido, a função deve retornar zero.

### Questão 3
Implemente a função `char classificaIMC(float peso, float altura);` que calcule o índice de massa corporal, \(IMC = \frac{peso}{altura^2}\), e retorne um código correspondente à faixa encontrada:
* `'A'`: abaixo do peso, \(IMC < 18,5\);
* `'N'`: peso normal, \(18,5 \le IMC < 25\);
* `'S'`: sobrepeso, \(25 \le IMC < 30\);
* `'O'`: obesidade, \(IMC \ge 30\).

Considere apenas valores positivos de peso e altura. A função principal deve interpretar o código retornado e imprimir a classificação por extenso.

### Questão 4
Implemente a função `int contaVogais(char c1, char c2, char c3, char c4, char c5);` que receba cinco caracteres e retorne quantos deles são vogais. A função deve reconhecer letras maiúsculas e minúsculas.

### Questão 5
Implemente a função `void exibeTabuada(int n)`, que imprima a tabuada de \(n\), de \(n \times 1\) até \(n \times 10\). A função não deve retornar valor.

### Questão 6
Implemente a função `int somaMultiplos(int inicio, int fim, int k);` que retorne a soma de todos os múltiplos de \(k\) no intervalo fechado \([inicio, fim]\). Considere \(k\) diferente de zero.

### Questão 7
Dados dois números inteiros \(X\) e \(Y\), implemente uma função que calcule a soma dos números ímpares estritamente entre eles. Caso \(X > Y\), a função deverá trocá-los antes de realizar o cálculo.

### Questão 8
Implemente as funções:
* `double termoLinear(double a, double x);`
* `double termoQuadratico(double b, double x);`
* `double termoCubico(double c, double x);`
* `double avalia(double a, double b, double c, double x);`

para avaliar o polinômio \(P(x) = ax + bx^2 + cx^3\). A função `avalia` deve utilizar as três funções correspondentes aos termos do polinômio.

### Questão 9
Implemente as funções:
* `long long rafael(int x, int y);`
* `long long beto(int x, int y);`
* `long long carlos(int x, int y);`

correspondentes às expressões:
* \(R(x, y) = (3x)^2 + y^2\)
* \(B(x, y) = 2x^2 + (5y)^2\)
* \(C(x, y) = -100x + y^3\)

Crie também uma função que utilize os resultados das três funções e informe qual deles é o maior. Se houver empate, o programa deverá informar todas as funções que obtiveram o maior valor.