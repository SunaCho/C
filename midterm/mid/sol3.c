#include <stdio.h>

int main(void){

    int num;
    scanf("%d", &num);

// 여기서 for문에 넣고 입력 돌려도 됨

    if (num<1)
        printf("오류");
    else {
        if (num%3==0 && num%5==0)
            printf("%d",num);
        else
            printf("오류");
    }
    
    return 0;
}


