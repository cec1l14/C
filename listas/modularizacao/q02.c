#include <stdio.h>

int diasNoMes(int mes, int ano){
    if ((mes < 1) || (mes > 12)){
        return 0;
    } else if (((mes % 2) != 0) || (mes == 8)){
        return 31;
    } else if(mes == 2){
        if (((ano % 400) == 0) || (((ano % 4) == 0) && (ano % 100) != 0)){
            return 29;
        } else{
            return 28;
        }
    } else{
        return 30;
    }
}
int main(){

    int mes, ano, result;

    printf("Informe o mes e o ano: \n");
    scanf("%d %d", &mes, &ano);

    result = diasNoMes(mes, ano);

    printf("O mes possui %d dias\n", result);

    return 0;
}