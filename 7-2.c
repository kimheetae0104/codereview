#include <stdio.h>

int get_num(void);

int main(void){
    int result;

    result = get_num();  // get_num()함수는 양수를 입력받아 전환
    printf("반환값 : %d\n", result);

    return 0;
}

int get_num(void){
    int num;
    printf("양수 입력: ");
    scanf("%d\n", &num);

    return num;
}