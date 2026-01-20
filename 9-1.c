#include <stdio.h>

int main(void){
    int a;
    double b;
    char c;

    printf("int형 변수의 주소 : %u\n", &a); // 주소는 부호가 없음 %u 사용
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);
    return 0;
}