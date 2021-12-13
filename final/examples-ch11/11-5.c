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
    printf("%d",max);
    return 0;

}