#include <stdio.h>

int main(void) 
{
    int n, i=2, j=5, cnt=2; 
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d",1);
        return 0;
    }
    while(1)
    {
        if (i<=n && i+j>=n)
        {
            printf("%d",cnt); 
            break;
        }
        i=i+j+1;
        j+=6;  // 방이 늘어나는 정도가 6씩 증가함
        cnt++;
    }
}