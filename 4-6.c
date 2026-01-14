#include<stdio.h>

int main(void){
    int a =30;
    int res;
    // 숏 서킷 롤 
    // && , || 은 좌항만으로 연산결과를 판결하는 기능 
    res=(a>10) && (a < 20);
    printf("(a>10) && (a < 20) : %d\n", res);
    res=(a < 10) || (a > 20);
    printf("(a < 10) || (a > 20) : %d\n", res);
    res= !(a >= 30);
    printf("(a >= 30) : %d\n", res);

    return 0;
}