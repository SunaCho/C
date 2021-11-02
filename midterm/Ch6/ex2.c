#include <stdio.h> 
int main(void){

    int a, b, num;

    scanf("%d %d %d", &a ,&b ,&num);

    if (num==1)
        printf("%d",a+b);
    else if (num==2)
        printf("%d",a-b);
    else if (num==3)
        printf("%d",a*b);
    else if (num==4)
        printf("%f",(double) a/b);
    else
        printf("안해");

    return 0;
}