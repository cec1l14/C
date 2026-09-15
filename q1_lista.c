#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max){

    if ((a>b) && (a>c)){
        *max = a;
    } else if ((b>a) && (b>c)){
        *max = b;
    } else{
        *max = c;
    }

    if ((a<b) && (a<c)){
        *min = a;
    } else if ((b<a) && (b<c)){
        *min = b;
    } else{
        *min = c;
    }

}

int main(){

    int a, b, c;
    int *min, *max;
    
    scanf("%d %d %d", &a, &b, &c);

    minMax(a, b, c, min, max);

    printf("Maximo: %d\n", *max);
    printf("Minimo: %d\n", *min);

    return 0;
}