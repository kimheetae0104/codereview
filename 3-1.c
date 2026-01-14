#include<stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    int a;
    int b,c;
    double da;
    char ch;

    a = 10;
    b = a;
    c = a + 20;
    da = 3.5;
    ch = 'A';

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값 : %c\n", ch);

    return 0;

}