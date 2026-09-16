#include <stdio.h>

int main(void) {
    
    int N, count, i;
    count = 0;

    scanf("%d", &N);

    if ((N%2) == 0){
        for(i=1; i<((N/2)+1); i++){
            if ((N%i) == 0)
                count++;
        }
    } else{
        for(i=1; i<((N-1)/2); i++){
            if ((N%i) == 0)
                count++;
        }
    }
    printf("%d",count+1);
    
    return 0;
}