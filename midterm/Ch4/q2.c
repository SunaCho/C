#include <stdio.h>
int main(void){

    int a,x,y,z;

// 범위 달면 좋겠지만.. if (num>=100 && num<1000) {} else {return;}
    scanf("%d",&a);
    x=a/100;
    y=a%100;
    y=y/10;
    z=a%10;

    printf("%d %d %d", x, y, z);

    return 0;
}