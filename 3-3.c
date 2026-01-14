#include<stdio.h>

int main(void){
    short sh = 32767; //short 형의 최댓값 초기화
    int in = 2147483647; 
    long ln = 2147483647;
    long long lln = 1234512345123455;

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n",ln);
    printf("long long형 변수 출력: %lln\n", lln);

    return 0;
}