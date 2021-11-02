#include <stdio.h>

int main(void){

    int num;
    printf("출력하고 싶은 구구단의 단을 입력하세요:\n");
    scanf("%d",&num);
    for (int i=9; i>=1; i--)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
