#include<stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("%.1lf\n",1e6);
    printf("%.7lf\n", 3.14e-5); // 지수형태 x10을 e로 표현 지수는 그 옆에 숫자로 표기 10의 -5승
    printf("%le\n",0.0000314);
    printf("%.2le\n", 0.0000314);

    return 0;
}