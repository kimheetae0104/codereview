#include <stdio.h>

int main(void){
    int a = 10, b =20;
    int res;
    // , 콤마 연산자는 차례로 연산이 수해되며 결과적으로 
    // res 에 저장되는 값은 증가된 b의 값이다.
    res = (++a, ++b);
    printf("a:%d, b:%d\n", a, b);
    printf("res:%d\n", res);

    return 0;
}