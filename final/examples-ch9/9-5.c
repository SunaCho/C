#include <stdio.h>
int main(void) {
    int num, sum=0;
    while(1){
        scanf("%d",&num);

        if (num==0)
            break;
        sum+=num;

    }
    printf("%d\n",sum);
    return 0;
}