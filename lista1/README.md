# Lista de Exercícios – Entrada/Saída, Estruturas de Condicionais e Estruturas de Repetição


## Entrada e Saída

### **P1. Média 1**
Leia dois valores decimais $A$ e $B$. Calcule a média ponderada usando os pesos **3.5** e **7.5**, e imprima o resultado com 5 casas decimais.

* **Formato de saída:** `MEDIA = X`

---

### **P2. Consumo**
Leia a distância total percorrida (inteiro) e o combustível gasto (número real). Calcule o consumo médio do veículo.

* **Formato de saída:** `X.XXX km/l`

---

### **P3. Distância**
Dois carros se deslocam em sentidos opostos com velocidades de $60\text{ km/h}$ e $90\text{ km/h}$. Dado um valor em quilômetros representando a distância entre eles, calcule o tempo necessário em minutos para que essa distância seja alcançada.

---

### **P4. Conversão de Tempo**
Leia um valor inteiro $N$ representando o total de segundos e converta-o para o formato legível.

* **Formato de saída:** `horas:minutos:segundos`

---

### **P5. Esfera**
Faça um programa que calcule e mostre o volume de uma esfera dado o valor do seu raio ($R$).

$$\text{Volume} = \left(\frac{4}{3}\right) \cdot \pi \cdot R^3$$

* **Atribuição:** $\pi = 3.14159$
* **Formato de saída:** `VOLUME = V` (com 3 casas decimais)
* **Dica:** Utilize `(4 / 3.0)` ou `(4.0 / 3)` para garantir a divisão flutuante.

---

##  IF – Condicionais

### **P6. Coordenadas de um Ponto**
Leia dois valores reais $x$ e $y$ e determine a localização do ponto no plano cartesiano (se está em algum dos quadrantes, sobre um dos eixos ou na origem).

---

### **P7. Ordenação Simples**
Leia três valores inteiros e apresente-os em ordem crescente. Em seguida, apresente os mesmos valores na ordem original em que foram digitados, separados por uma linha em branco.

---

### **P8. Tempo de Jogo com Minutos**
Leia a hora e o minuto de início e término de um jogo. Calcule a duração total em horas e minutos. 

> **Nota:** Considere que o jogo pode começar em um dia e terminar no outro (ultrapassar a meia-noite).

---

### **P9. Aumento de Salário**
Leia o valor de um salário e aplique o reajuste percentual com base na tabela abaixo. Imprima o novo salário, o valor do reajuste e o percentual utilizado.

| Faixa Salarial | Percentual de Aumento |
|---|---|
| Menor que R$ 1.500,00 | 20% |
| Entre R$ 1.500,00 e R$ 5.000,00 | 15% |
| Maior que R$ 5.000,00 | 10% |

---

### **P10. Fórmula de Bhaskara**
Leia três valores reais $A$, $B$ e $C$. Calcule as raízes reais de uma equação do segundo grau usando a fórmula de Bhaskara.

$$x = \frac{-B \pm \sqrt{B^2 - 4AC}}{2A}$$

* **Exceções:** Se $A = 0$ ou se o discriminante ($\Delta = B^2 - 4AC$) for menor que zero, imprima a mensagem:
  ```
  Impossível calcular
  ```

---

##  FOR – Laços de Repetição

### **P11. Soma de Ímpares Consecutivos I**
Leia dois números inteiros e calcule a soma de todos os números ímpares existentes entre eles (não inclusivo).

---

### **P12. Tabuada**
Leia um número inteiro e apresente a sua tabuada multiplicativa de 1 a 20.

---

### **P13. Maior e Posição**
Leia 10 números inteiros. Identifique o maior valor lido e apresente a sua posição relativa de entrada (de 1 a 10).

---

### **P14. Sequência de Números e Soma**
Leia pares de inteiros $M$ e $N$. Para cada par positivo:
1. Imprima a sequência de números entre eles (inclusive).
2. Imprima a soma total desses números.

> O processamento termina quando pelo menos um dos valores do par for menor ou igual a zero.

---

### **P15. Dividindo X por Y**
Leia um número inteiro $N$ representando a quantidade de pares a serem processados. Para cada par $(X, Y)$, imprima o resultado de $\frac{X}{Y}$.

* **Exceção:** Se $Y = 0$, imprima a mensagem:
  ```
  divisao impossivel
  ```