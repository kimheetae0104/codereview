// 비트 연산자 
#include <stdio.h>

int main(void){
    int a = 10;
    int b = 12;

    printf(" a & b : %d\n", a & b); // 8
    printf(" a ^ b : %d\n", a ^ b); // 6
    printf(" a | b : %d\n", a | b); // 14
    printf(" ~a : %d\n", ~a); //-11
    printf(" a << 1 : %d\n", a << 1); // 20
    printf(" a >> 2 : %d\n", a >> 2); // 2
    
    return 0;
}