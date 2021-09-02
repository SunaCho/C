#include <stdio.h>

int main(void)
{
    int x;
    int a=0, b=1, flag=-1;
    scanf("%d", &x);
    while(a<x)
    {
        a+=b;
        b+=1;
        flag*=-1;
    }

    a=a-(b-1);

    if(flag>0)
        printf("%d/%d\n", b+a-x, x-a);
    else
        printf("%d/%d\n", x-a, b+a-x);
    
    return 0;
}