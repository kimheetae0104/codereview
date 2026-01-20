#include<stdio.h>

int sum(int x, int y); // sum 함수 선언

int main(void){
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("result : %d\n", result);

    return 0;
}

int sum( int x, int y){ //sum 함수 정의 시작
    int temp;           // 두 정수의 합을 잠시 저장할 변수

    temp = x + y;       // x 와 y의 합을 temp에 보관

    return temp;        //temp 의 값을 반환
    
}