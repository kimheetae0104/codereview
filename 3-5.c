// float(7), double(15) 실수형 자료형은 출력값의 오차가 발생할 수 있음 그래서 7자리, 15자리 정도만 사용
#include<stdio.h>

int main(void){
    float ft = 1.23457890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수의 값 : %.20f\n", ft); //1.23457884788513183594
    printf("double형 변수의 값 : %.20lf\n", db); //1.23456789012345669043

    return 0;
}