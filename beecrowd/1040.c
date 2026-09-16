#include <stdio.h>

int main(){

    double n1, n2, n3, n4, media1, nota, media2;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media1 = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    printf("Media: %.1lf\n", media1);

    if (media1 >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (media1 < 5.0){
        printf("Aluno reprovado.\n");
    } else{
        printf("Aluno em exame.\n");

        scanf("%lf", &nota);
        printf("Nota do exame: %.1lf\n", nota);
        
        media2 = (media1 + nota)/2.0;

        if (media2 >= 5.0){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", media2);
    }

    return 0;
}