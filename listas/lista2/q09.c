#include <stdio.h>

long long rafael(int x, int y){
    long long r1;
    
    r1 = ((3 * x) * (3 * x)) + (y * y);
    return r1;
}

long long beto(int x, int y){
    long long r2;
    
    r2 = (2 * x * x) + ((5 * y) * (5 * y));
    return r2;
}

long long carlos(int x, int y){
    long long r3;
    
    r3 = ((-100) * x) + (y * y * y);
    return r3;
}

long long maior(int x, int y){
    long long r1, r2, r3, maior;

    r1 = rafael(x, y);
    r2 = beto(x, y);
    r3 = carlos(x, y);

    if((r1 > r2) && (r1 > r3)){
        maior = r1;
    } else if((r2 > r1) && (r2 > r3)){
        maior = r2;
    } else{
        maior = r3;
    }

    return maior; 
}

int main(){
    int x, y; 
    long long result;

    printf("Informe os valores de x e y: \n");
    scanf("%d %d", &x, &y);

    result = maior(x, y);

    
    if(result == rafael(x, y)){
        printf("Rafael obteve o maior valor: %lld\n", result);
    } 
    if(result == beto(x, y)){
        printf("Beto obteve o maior valor: %lld\n", result);
    } 
    if(result == carlos(x, y)){
        printf("Carlos obteve o maior valor: %lld\n", result);
    }

    return 0;
}