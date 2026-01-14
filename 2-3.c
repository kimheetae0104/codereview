#include<stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    printf("BE HAPPY\n");
    printf("123344567\n");
    printf("MY\triend\n"); // MY를 출력하고 탭 위치로 이동(\t) 탭 후에 friend 출력
    printf("Goot\bd\tchance\n"); //t 를 d로 바꾸고 탭 위치로 이동 후에 찬스 출력
    printf("Cow\rW\a\n"); //맨 앞으로 이동 (\r)해 C를 W로 바꾸고 벨로리(\a)을 내고 줄 을 바꿈
    
    return 0;
}