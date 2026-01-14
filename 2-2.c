#include<stdio.h> // 전처리 stdio.h 파일ㅇ릐 내용을 프로그램 안에 복사한다 
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("BE HAPPY!\n");
    printf("MY friend");

    return 0;
}