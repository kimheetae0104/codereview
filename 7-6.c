#include<stdio.h>

void fruit(int count);

int main(void){
    fruit(1);       //처음 호출하면서 인수로 1을 줌

    return 0;
}
void fruit(int count){
    printf("apple\n");
    if(count==3)return;
    fruit(count + 1);
}