#include <stdio.h>
#define CNT 5

int main(void){
    int score[CNT];
    int i, sum=0;
    double avg;
    for (i=0; i<CNT; i++) {
        printf("성적 입력");
        scanf("%d",&score[i]);
    }
    for (i=0;i<CNT;i++) {
        sum+=score[i];
    }
    avg =(double)sum/CNT;
    printf("성적 평균=%f\n",avg);
    return 0;

}