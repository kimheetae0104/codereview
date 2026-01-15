#include <stdio.h>

int main(void){
    int i;
    int sum = 0;
    for ( i = 1; i <=100; i++){
        continue;            
    }
    sum += i;

printf(sum);

    return 0;
}