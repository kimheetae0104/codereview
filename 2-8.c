#include<stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("%c\n", 'A'); //'' 문자 상수 
    printf("%s\n", "A"); //"" 문자열 상수
    printf("%c은 %s 입니다.\n", '1', "first");

    return 0;
}