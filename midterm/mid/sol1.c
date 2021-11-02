// 2173112 조선아
// 해결한 문제: 1. for문을 이용한 구구단 출력 프로그램

#include <stdio.h>

int main(void){

    int num;
    printf("출력하고 싶은 구구단의 단을 입력하세요:\n");
    scanf("%d",&num);
    for (int i=1; i<=9; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}