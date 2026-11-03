#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max){
    if((a > b) && (a > c)){
        *max = a;
        if(b > c){
            *min = c;
        } else{
            *min = b;
        }
    } else if((b > a) && (b > c)){
        *max = b;
        if(a > c){
            *min = c;
        } else{
            *min = a;
        }
    } else{
        *max = c;
        if(b > a){
            *min = a;
        } else{
            *min = b;
        }
    }

    printf("Menor: %d\n", *min);
    printf("Maior: %d\n", *max);
}

int main(){
    int a, b, c;
    int menor, maior;

    printf("Informe os valores de a, b e c: \n");
    scanf("%d %d %d", &a, &b, &c);

    minMax(a, b, c, &menor, &maior);

    return 0;
}