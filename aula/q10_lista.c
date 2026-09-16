#include <stdio.h>

void giraTres(int *a, int *b, int *c){
    int d  = *a;
    *a = *b;
    *b = *c;
    *c = d;
    
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
    printf("c = %d\n", *c);
}


int main(){

    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    giraTres(&a, &b, &c);

    return 0;
}