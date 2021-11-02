#include <stdio.h>
int main(void) {

    int time, age, temp;

    scanf("%d %d", &time, &age);
    if (12<age && age<65)
        temp=1;
    else if ((3<=age && age<=12) || age>=65)
        temp=2;
    else
        temp=0;

    if (7<=time && time<=17)
        switch (temp) {
            case 1:
                printf("34000");
                break;
            case 2:
                printf("25000");
                break;
            default:
                printf("오류");
                break;
        }
    else if ((7>time && time>0) || (time>17 && time<24))
        printf("10000");
    else
        printf("시간 오류");
}