#include <stdio.h> 
int main(void){

    int x, y, sum;
    double avg;
    x=3;
    y=4;
    sum=x+y;
    avg=sum/2.0;

    printf("합계=%d\n", sum);
    printf("평균=%.2f\n", avg);

    return 0;
}