#include <stdio.h>

int main(void)
{
    int a, b, v, res=1;
    scanf("%ld %ld %ld", &a, &b, &v);

    int temp = (v-a) / (a-b);
    if ((v-a)%(a-b)==0)
        res+=temp;
    else
        res+=(temp+1);

    printf("%d", res);
    return 0;
}