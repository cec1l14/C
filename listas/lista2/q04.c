#include <stdio.h>

int contaVogais(char c1, char c2, char c3, char c4, char c5){

    int count = 0;

    if((c1 == 'a') || (c1 == 'e') || (c1 == 'i') || (c1 == 'o') || (c1 == 'u') || (c1 == 'A') || (c1 == 'E') || (c1 == 'I') || (c1 == 'O') || (c1 == 'U')){
        count++;
    } if((c2 == 'a') || (c2 == 'e') || (c2 == 'i') || (c2 == 'o') || (c2 == 'u') || (c2 == 'A') || (c2 == 'E') || (c2 == 'I') || (c2 == 'O') || (c2 == 'U')){
        count++;
    } if((c3 == 'a') || (c3 == 'e') || (c3 == 'i') || (c3 == 'o') || (c3 == 'u') || (c3 == 'A') || (c3 == 'E') || (c3 == 'I') || (c3 == 'O') || (c3 == 'U')){
        count++;
    } if((c4 == 'a') || (c4 == 'e') || (c4 == 'i') || (c4 == 'o') || (c4 == 'u') || (c4 == 'A') || (c4 == 'E') || (c4 == 'I') || (c4 == 'O') || (c4 == 'U')){
        count++;
    } if((c5 == 'a') || (c5 == 'e') || (c5 == 'i') || (c5 == 'o') || (c5 == 'u') || (c5 == 'A') || (c5 == 'E') || (c5 == 'I') || (c5 == 'O') || (c5 == 'U')){
        count++;
    }
    
    return count;
}

int main(){

    char c1, c2, c3, c4, c5;
    int result;

    printf("Digite cinco caracteres:\n");
    scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);

    result = contaVogais(c1, c2, c3, c4, c5);

    printf("Quantidade de vogais: %d\n", result);

    return 0;
}