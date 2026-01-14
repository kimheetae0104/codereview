#include<stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("%d\n", 10);
    printf("%lf\n", 3.4);
    printf("%.1lf\n", 3.45); //반올림해서 소숫점 한자리까지 출력
    printf("%.10lf\n", 3.4); // 소숫점 이하 10번째 자리까지 
    printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.4,1.2, 3.4-1.2);

    return 0;
    
}