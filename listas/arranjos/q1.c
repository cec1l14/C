#include <stdio.h>

int main(){

    int v[10];
    int i;

    for(i=0; i<10; i++){
        printf("Informe um valor:\n");
        scanf("%d", &v[i]);
    }

    int menor, maior, i_menor, i_maior;
    float media;

    menor = v[0];
    maior = v[0];
    i_maior = 0;
    i_menor = 0;

    for(i=1; i<10; i++){
        if(v[i] > maior){
            maior = v[i];
            i_maior = i;
        } if(v[i] < menor){
            menor = v[i];
            i_menor = 0;
        }
    }
    
    media = ((float)(maior+menor)/2);

    printf("Menor valor: %d\n", menor);
    printf("Posicao do menor: %d\n", i_menor);
    printf("Maior valor: %d\n", maior);
    printf("Posicao do maior: %d\n", i_maior);
    printf("Media: %.2f\n", media);
    return 0;
}