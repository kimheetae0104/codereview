#include<stdio.h>

int main(void){
    int a = 10, b = 15, total; // 변수 선언 초기화
    double avg;               // 평균 변수 선언 
    int *pa, *pb;          // 포인터 변수 선언
    int *pt = &total;   // 포인터 변수 선언과 total의 주소 대입
    double *pg = &avg;  // 포인터 변수 선언과 avg의 주소 대입

    pa = &a;        // 포인터 pa에 a의 주소 대입
    pb = &b;    // 포인터 pb에 b의 주소 대입

    *pt = *pa + *pb;    // total에 a와 b의 합 대입
    *pg = *pt / 2.0;    // avg에 total의 평균 대입

    printf("두 정수의 값  %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1f\n", *pg);

    return 0;
}