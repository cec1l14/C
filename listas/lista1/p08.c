#include <stdio.h>

int main(){

    int h1, m1, h2, m2, horas = 0, minutos = 0;

    printf("Informe horas e minutos iniciais:\n");
    scanf("%d %d", &h1, &m1);

    printf("Informe horas e minutos finais:\n");
    scanf("%d %d", &h2, &m2);

    if(h2 > h1){
        if(m2 > m1){
            minutos = (m2 - m1);
            horas = (h2 - h1);
        } else if(m1 == m2){
            minutos = 0;
            horas = (h2 - h1);
        } else{
            horas = ((h2 - h1) - 1);
            minutos = ((60 - m1) + m2);
        }
    } else if(h2 == h1){
        if(m2 > m1){
            minutos = (m2 - m1);
            horas = 0;
        } else if(m2 == m1){
            minutos = 0;
            horas = 24;
        } else{
            minutos = ((60 - m1) + m2);
            horas = 23;
        }
    } else{
        if(m2 > m1){
            minutos = m2 - m1;
            horas = ((h2 + 24) - h1);
        } else if(m1 == m2){
            minutos = 0;
            horas = ((h2 + 24) - h1);
        } else{
            minutos = ((60 - m1) + m2);
            horas = (((h2 + 24) - h1) - 1);
        }

    }

    printf("%d:%d\n", horas, minutos);
    return 0;
}