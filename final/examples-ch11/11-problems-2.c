#include <stdio.h>
#define CNT 5

int main(void){
    int score[CNT]={55,85,100,99,86};
    int i, max;
    for (i=0;i<CNT;i++)
        printf("%d ",score[i]);
    printf("\n");
    max=score[0];
    for (i=1;i<CNT;i++) {
        if (score[i]>max)
            max=score[i];
    }

    int min=score[0];
    for (i=1;i<CNT;i++) {
        if (score[i]<min)
            min=score[i];
    }

    int avg=0;
    for (i=0;i<CNT;i++) {
        avg+=score[i];
    }
    avg=(double)avg/CNT;

    printf("%d %d %d",max,min,avg);
    return 0;

}