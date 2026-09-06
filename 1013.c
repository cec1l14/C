#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, m1, m2;

    scanf("%d %d %d", &a, &b, &c);

    m1 = (a + b + abs(a - b))/2;
    m2 = (c + m1 + abs(c - m1))/2; 

    if (m1 > m2){
        printf("%d eh o maior\n", m1);
    }
    else{
        printf("%d eh o maior\n", m2);
    }

    return 0;
}