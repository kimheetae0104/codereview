#include<stdio.h> //#include 지정한 파일을 추가하는 지시자 
#include<stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("BE HAPPY!");
    system("pause");

    return 0;

}