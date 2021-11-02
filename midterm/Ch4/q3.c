#include <stdio.h> 
int main(void){

    int money, price, five, one, tmp;
    // 4000 3000 money-price 해서 나눠서 곱해서 저장

    scanf("%d %d", &money, &price);

    tmp=money-price;

    one+=(tmp/500);
    tmp-=one*500;
    five+=(tmp/100);

    printf("%d %d", one, five);
    // 500원짜리랑 100원짜리 개수 출력
    
    return 0;
}