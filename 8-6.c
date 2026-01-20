#include <stdio.h>

int main(void){
    char str[80];
    printf("문자열 입력 :");
    gets(str);  //gets 함수를 사용하여 문자열 입력 받기
    puts("입력된 문자열 : ");
    puts(str);   //puts 함수를 사용하여 문자열 출력하기

    return 0;
}