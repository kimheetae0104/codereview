#include<stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("%d\n", 12); // 10진수
    printf("%d\n",014); // 8진수
    printf("%d\n", 0xc); //16진수
    printf("%o\n", 12);
    printf("%x\n", 12);
    printf("%X\n", 12);
    
    return 0;
}