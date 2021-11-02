// 4. 사용자로부터 점수를 입력받아 합계/평균을 출력하는 프로그램

#include <stdio.h>
int main() {
    int num, tmp=0, sum=0;
    double avg;
    scanf("%d", &num);

    for (int i=1; i<=num; i++)
    {
        scanf("%d", &tmp);
        sum+=tmp;
        tmp=0;
    }
        
    printf("%d\n", sum);
    avg=sum/num;
    printf("%f\n", avg);    

    return 0;
}

