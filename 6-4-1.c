#include <stdio.h>

int main(void){

    int i, j;

    for(i = 1; i < 9; i++){
        for(j = 1; j < 10; j++){
            printf("%d X %d = %d\n",i+1, j, (i+1)*j );
        }
        printf("\n");
    }
}