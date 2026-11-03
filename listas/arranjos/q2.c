#include <stdio.h>

int main(){

    int M[4][4] =   {{1,2,3,4},
                    {5,6,7,8},  
                    {9,10,11,12},
                    {13,14,15,16}}

    for(int i=0; i < 4; i++){
        for(int j=0; j < 4, j++){
            if (j != 3)
            printf("%d, ", M[i][j]);
            else
            printf("%d\n", M[i][j]);
        }
    }

    int soma_pri = 0;
    for(int i=0; i < 4; i++){
        soma_pri += M[i][i];
    }

    printf("Soma primaria: %d\n", soma_pri);

    int soma_sec = 0;
    for(int i=0; i < 4; i++){
        for(int j=0; c = 3; j < 4; j++, c--){
            M[i][j] = 
        }
    }

    return 0;
}