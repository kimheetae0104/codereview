#include<stdio.h>

int main(void){
    int income = 0;
    double tax;
    const double tax_rate = 0.12; // const 자료형 변수명 = 값; 
                                  // const 값을 바꿀 수 없어 선언하자마자 초기화 설정      
    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다\n", tax);

    return 0;
}